#ifndef __CRASHDUMPDETECTOR_H_VERSION__
#define __CRASHDUMPDETECTOR_H_VERSION__ 100

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus
#include <ntddk.h>
#ifdef __cplusplus
};
#endif // __cplusplus

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

	BOOLEAN CddInit(VOID);
	VOID CddUnInit(VOID);

	BOOLEAN CddIsCrashDumpFile(const IN HANDLE hDumpFile, const IN PVOID pPage, const IN ULONG uSize);
	PVOID CddGetFixedAddress(const IN HANDLE hDumpFile, const IN PVOID pAddress);

#ifdef __cplusplus
}; // extern "C"
#endif // __cplusplus

#endif // __CRASHDUMPDETECTOR_H_VERSION__