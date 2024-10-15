EXTERN_C NTSTATUS NTAPI RtlAdjustPrivilege(DWORD, BYTE, BYTE, PBYTE);
EXTERN_C NTSTATUS NTAPI NtRaiseHardError(NTSTATUS ntErrors, DWORD dwParams, DWORD dwUnicodeStringParamMask, PDWORD_PTR pDwParams, DWORD dwResponse, PDWORD pResponse);
// this is the ntstatus define (made for crashing the system)
// rewritten by Tubercomiosis (me)
