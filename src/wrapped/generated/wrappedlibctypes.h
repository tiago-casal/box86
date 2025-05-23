/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.11) *
 *******************************************************************/
#ifndef __wrappedlibcTYPES_H_
#define __wrappedlibcTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFi_t)(int32_t);
typedef void (*vFp_t)(void*);
typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFi_t)(int32_t);
typedef int32_t (*iFL_t)(uintptr_t);
typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFO_t)(int32_t);
typedef uint32_t (*uFu_t)(uint32_t);
typedef uint32_t (*uFp_t)(void*);
typedef intptr_t (*lFv_t)(void);
typedef intptr_t (*lFi_t)(int32_t);
typedef uintptr_t (*LFL_t)(uintptr_t);
typedef void* (*pFu_t)(uint32_t);
typedef void* (*pFL_t)(uintptr_t);
typedef void* (*pFp_t)(void*);
typedef void (*vFip_t)(int32_t, void*);
typedef void (*vFpi_t)(void*, int32_t);
typedef void (*vFpu_t)(void*, uint32_t);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFpV_t)(void*, ...);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpL_t)(void*, uintptr_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFpV_t)(void*, ...);
typedef int32_t (*iFSp_t)(void*, void*);
typedef int64_t (*IFII_t)(int64_t, int64_t);
typedef uint64_t (*UFUU_t)(uint64_t, uint64_t);
typedef void* (*pFip_t)(int32_t, void*);
typedef void* (*pFuu_t)(uint32_t, uint32_t);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpp_t)(void*, void*);
typedef void (*vFipV_t)(int32_t, void*, ...);
typedef void (*vFpuu_t)(void*, uint32_t, uint32_t);
typedef void (*vFpup_t)(void*, uint32_t, void*);
typedef void (*vFppu_t)(void*, void*, uint32_t);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFvpp_t)(void, void*, void*);
typedef int32_t (*iFvpV_t)(void, void*, ...);
typedef int32_t (*iFiip_t)(int32_t, int32_t, void*);
typedef int32_t (*iFiiN_t)(int32_t, int32_t, ...);
typedef int32_t (*iFipL_t)(int32_t, void*, uintptr_t);
typedef int32_t (*iFipp_t)(int32_t, void*, void*);
typedef int32_t (*iFipV_t)(int32_t, void*, ...);
typedef int32_t (*iFpuu_t)(void*, uint32_t, uint32_t);
typedef int32_t (*iFpLi_t)(void*, uintptr_t, int32_t);
typedef int32_t (*iFppi_t)(void*, void*, int32_t);
typedef int32_t (*iFppL_t)(void*, void*, uintptr_t);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFppV_t)(void*, void*, ...);
typedef int32_t (*iFpOu_t)(void*, int32_t, uint32_t);
typedef int32_t (*iFpOV_t)(void*, int32_t, ...);
typedef int64_t (*IFppi_t)(void*, void*, int32_t);
typedef uint64_t (*UFppi_t)(void*, void*, int32_t);
typedef double (*KFppi_t)(void*, void*, int32_t);
typedef double (*KFppp_t)(void*, void*, void*);
typedef intptr_t (*lFipL_t)(int32_t, void*, uintptr_t);
typedef intptr_t (*lFppi_t)(void*, void*, int32_t);
typedef void* (*pFpii_t)(void*, int32_t, int32_t);
typedef void* (*pFpip_t)(void*, int32_t, void*);
typedef void (*vFiipV_t)(int32_t, int32_t, void*, ...);
typedef void (*vFpLLp_t)(void*, uintptr_t, uintptr_t, void*);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFivpV_t)(int32_t, void, void*, ...);
typedef int32_t (*iFiiip_t)(int32_t, int32_t, int32_t, void*);
typedef int32_t (*iFiiiN_t)(int32_t, int32_t, int32_t, ...);
typedef int32_t (*iFiiII_t)(int32_t, int32_t, int64_t, int64_t);
typedef int32_t (*iFiupp_t)(int32_t, uint32_t, void*, void*);
typedef int32_t (*iFipii_t)(int32_t, void*, int32_t, int32_t);
typedef int32_t (*iFipuu_t)(int32_t, void*, uint32_t, uint32_t);
typedef int32_t (*iFippi_t)(int32_t, void*, void*, int32_t);
typedef int32_t (*iFippL_t)(int32_t, void*, void*, uintptr_t);
typedef int32_t (*iFpvpp_t)(void*, void, void*, void*);
typedef int32_t (*iFpvpV_t)(void*, void, void*, ...);
typedef int32_t (*iFpipp_t)(void*, int32_t, void*, void*);
typedef int32_t (*iFpipV_t)(void*, int32_t, void*, ...);
typedef int32_t (*iFpuii_t)(void*, uint32_t, int32_t, int32_t);
typedef int32_t (*iFpupV_t)(void*, uint32_t, void*, ...);
typedef int32_t (*iFpLpV_t)(void*, uintptr_t, void*, ...);
typedef int32_t (*iFppii_t)(void*, void*, int32_t, int32_t);
typedef int32_t (*iFppiV_t)(void*, void*, int32_t, ...);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef int64_t (*IFppip_t)(void*, void*, int32_t, void*);
typedef uint64_t (*UFppip_t)(void*, void*, int32_t, void*);
typedef intptr_t (*lFipiI_t)(int32_t, void*, int32_t, int64_t);
typedef intptr_t (*lFpupp_t)(void*, uint32_t, void*, void*);
typedef void (*vFpLLpp_t)(void*, uintptr_t, uintptr_t, void*, void*);
typedef int32_t (*iFiippi_t)(int32_t, int32_t, void*, void*, int32_t);
typedef int32_t (*iFiLLLL_t)(int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
typedef int32_t (*iFipipu_t)(int32_t, void*, int32_t, void*, uint32_t);
typedef int32_t (*iFipuup_t)(int32_t, void*, uint32_t, uint32_t, void*);
typedef int32_t (*iFipppp_t)(int32_t, void*, void*, void*, void*);
typedef int32_t (*iFpiipV_t)(void*, int32_t, int32_t, void*, ...);
typedef int32_t (*iFpiLpp_t)(void*, int32_t, uintptr_t, void*, void*);
typedef int32_t (*iFpippp_t)(void*, int32_t, void*, void*, void*);
typedef int32_t (*iFpuppp_t)(void*, uint32_t, void*, void*, void*);
typedef int32_t (*iFpLLpp_t)(void*, uintptr_t, uintptr_t, void*, void*);
typedef int32_t (*iFpLppp_t)(void*, uintptr_t, void*, void*, void*);
typedef void* (*pFpLLiN_t)(void*, uintptr_t, uintptr_t, int32_t, ...);
typedef void* (*pFppLLp_t)(void*, void*, uintptr_t, uintptr_t, void*);
typedef void* (*pFpppLp_t)(void*, void*, void*, uintptr_t, void*);
typedef int32_t (*iFpuiupV_t)(void*, uint32_t, int32_t, uint32_t, void*, ...);
typedef int32_t (*iFpLiipV_t)(void*, uintptr_t, int32_t, int32_t, void*, ...);
typedef int32_t (*iFpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef void* (*pFpLiiii_t)(void*, uintptr_t, int32_t, int32_t, int32_t, int32_t);
typedef void* (*pFpLiiiI_t)(void*, uintptr_t, int32_t, int32_t, int32_t, int64_t);
typedef void* (*pFpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef int32_t (*iFpippppp_t)(void*, int32_t, void*, void*, void*, void*, void*);
typedef int32_t (*iFpuiippp_t)(void*, uint32_t, int32_t, int32_t, void*, void*, void*);
typedef int32_t (*iFpLiLppp_t)(void*, uintptr_t, int32_t, uintptr_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(__cxa_pure_virtual, vFv_t) \
	GO(_Exit, vFi_t) \
	GO(_exit, vFi_t) \
	GO(exit, vFi_t) \
	GO(__close_nocancel, iFi_t) \
	GO(getwc, iFp_t) \
	GO(__sysconf, lFi_t) \
	GO(sysconf, lFi_t) \
	GO(getpwuid, pFu_t) \
	GO(__secure_getenv, pFp_t) \
	GO(secure_getenv, pFp_t) \
	GO(__fstat64_time64, iFip_t) \
	GO(fstat, iFip_t) \
	GO(__lstat64_time64, iFpp_t) \
	GO(__stat64_time64, iFpp_t) \
	GO(execvp, iFpp_t) \
	GO(lstat, iFpp_t) \
	GO(lstat64, iFpp_t) \
	GO(scanf, iFpp_t) \
	GO(stat, iFpp_t) \
	GO(stat64, iFpp_t) \
	GO(execl, iFpV_t) \
	GO(execle, iFpV_t) \
	GO(execlp, iFpV_t) \
	GO(_IO_file_stat, iFSp_t) \
	GO(aligned_alloc, pFuu_t) \
	GO(_Unwind_Find_FDE, pFpp_t) \
	GO(syslog, vFipV_t) \
	GO(_ITM_addUserCommitAction, vFpup_t) \
	GO(__vwprintf_chk, iFvpp_t) \
	GO(modify_ldt, iFipL_t) \
	GO(getopt, iFipp_t) \
	GO(dprintf, iFipV_t) \
	GO(_IO_vfscanf, iFppp_t) \
	GO(execvpe, iFppp_t) \
	GO(__isoc23_fscanf, iFppV_t) \
	GO(__isoc23_sscanf, iFppV_t) \
	GO(__isoc23_sscanf, iFppV_t) \
	GO(__isoc99_fscanf, iFppV_t) \
	GO(__isoc99_sscanf, iFppV_t) \
	GO(__isoc99_swscanf, iFppV_t) \
	GO(fscanf, iFppV_t) \
	GO(sscanf, iFppV_t) \
	GO(swscanf, iFppV_t) \
	GO(__libc_open, iFpOu_t) \
	GO(__isoc23_strtoll, IFppi_t) \
	GO(__isoc23_strtoull, UFppi_t) \
	GO(__strtold_internal, KFppi_t) \
	GO(__strtold_l, KFppp_t) \
	GO(strtold_l, KFppp_t) \
	GO(__read_nocancel, lFipL_t) \
	GO(__isoc23_strtol, lFppi_t) \
	GO(__syslog_chk, vFiipV_t) \
	GO(__libc_init, vFpppp_t) \
	GO(ptrace, iFiupp_t) \
	GO(sendmmsg, iFipuu_t) \
	GO(__fstatat64_time64, iFippi_t) \
	GO(readlinkat, iFippL_t) \
	GO(__vfwprintf_chk, iFpvpp_t) \
	GO(_IO_vfprintf, iFpppp_t) \
	GO(__isoc23_strtoll_l, IFppip_t) \
	GO(__isoc23_strtoull_l, UFppip_t) \
	GO(prctl, iFiLLLL_t) \
	GO(getopt_long, iFipppp_t) \
	GO(getopt_long_only, iFipppp_t)

#endif // __wrappedlibcTYPES_H_
