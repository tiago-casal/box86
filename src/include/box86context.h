#ifndef __BOX86CONTEXT_H_
#define __BOX86CONTEXT_H_
#include <stdint.h>
#include <pthread.h>
#include "pathcoll.h"

typedef struct elfheader_s elfheader_t;

typedef struct x86emu_s x86emu_t;
typedef struct zydis_s zydis_t;
typedef struct lib_s lib_t;
typedef struct bridge_s bridge_t;
typedef struct dlprivate_s dlprivate_t;
typedef struct kh_symbolmap_s kh_symbolmap_t;
typedef struct callbacklist_s callbacklist_t;
typedef struct library_s library_t;
typedef struct atfork_fnc_s {
    uintptr_t prepare;
    uintptr_t parent;
    uintptr_t child;
} atfork_fnc_t;
#ifdef DYNAREC
typedef struct dynablocklist_s dynablocklist_t;
typedef struct mmaplist_s mmaplist_t;
#endif

typedef void* (*procaddess_t)(const char* name);

#define MAX_SIGNAL 64

typedef struct box86context_s {
    path_collection_t   box86_path;     // PATH env. variable
    path_collection_t   box86_ld_lib;   // LD_LIBRARY_PATH env. variable

    int                 x86trace;
    int                 trace_tid;
#ifdef DYNAREC
    int                 trace_dynarec;
#endif
    zydis_t             *zydis;         // dlopen the zydis dissasembler
    void*               box86lib;       // dlopen on box86 itself

    int                 argc;
    char**              argv;

    int                 envc;
    char**              envv;

    char*               fullpath;
    char*               box86path;      // path of current box86 executable

    uint32_t            stacksz;
    int                 stackalign;
    void*               stack;          // alocated stack

    elfheader_t         **elfs;         // elf headers and memory
    int                 elfcap;
    int                 elfsize;        // number of elf loaded

    uintptr_t           ep;             // entry point

    x86emu_t            *emu;           // CPU / FPU / MMX&SSE regs

    lib_t               *maplib;        // lib and symbols handling

    bridge_t            *threads;       // threads
    bridge_t            *system;        // other bridges
    uintptr_t           vsyscall;       // vsyscall bridge value
    dlprivate_t         *dlprivate;     // dlopen library map
    kh_symbolmap_t      *glwrappers;    // the map of wrapper for glProcs (for GLX or SDL1/2)
    procaddess_t        glxprocaddress;
    kh_symbolmap_t      *alwrappers;    // the map of wrapper for alGetProcAddress

    callbacklist_t      *callbacks;     // all callbacks

    pthread_mutex_t     mutex_once;
    pthread_mutex_t     mutex_once2;
    pthread_mutex_t     mutex_trace;
    pthread_mutex_t     mutex_lock;

    library_t           *libclib;       // shortcut to libc library (if loaded, so probably yes)
    library_t           *sdl1lib;       // shortcut to SDL1 library (if loaded)
    void*               sdl1allocrw;
    void*               sdl1freerw;
    library_t           *sdl1mixerlib;
    library_t           *sdl1imagelib;
    library_t           *sdl1ttflib;
    library_t           *sdl2lib;       // shortcut to SDL2 library (if loaded)
    void*               sdl2allocrw;
    void*               sdl2freerw;
    library_t           *sdl2mixerlib;
    library_t           *sdl2imagelib;
    library_t           *sdl2ttflib;
    library_t           *x11lib;
    library_t           *zlib;
    library_t           *vorbisfile;
    library_t           *vorbis;
    library_t           *monounity;

    int                 deferedInit;
    elfheader_t         **deferedInitList;
    int                 deferedInitSz;
    int                 deferedInitCap;

    pthread_key_t       tlskey;     // then tls key to have actual tlsdata
    void*               tlsdata;    // the initial global tlsdata
    int32_t             tlscurrent; // current size of tlsdata
    int32_t             tlssize;    // wanted size of tlsdata

#ifdef DYNAREC
    pthread_mutex_t     mutex_blocks;
    pthread_mutex_t     mutex_mmap;
    dynablocklist_t     *dynablocks;
    mmaplist_t          *mmaplist;
    int                 mmapsize;
#endif

    int                 forked;         //  how many forks... cleanup only when < 0

    atfork_fnc_t        *atforks;       // fnc for atfork...
    int                 atfork_sz;
    int                 atfork_cap;

    uint8_t             canary[4];

    uintptr_t           signals[MAX_SIGNAL];
    uintptr_t           restorer[MAX_SIGNAL];
    x86emu_t            *signal_emu;
    int                 no_sigsegv;

} box86context_t;

box86context_t *NewBox86Context(int argc);
void FreeBox86Context(box86context_t** context);

// return the index of the added header
int AddElfHeader(box86context_t* ctx, elfheader_t* head);

// return the tlsbase (negative) for the new TLS partition created (no partition index is stored in the context)
int AddTLSPartition(box86context_t* context, int tlssize);

#ifdef DYNAREC
uintptr_t AllocDynarecMap(box86context_t *context, int size);
#endif

#endif //__BOX86CONTEXT_H_