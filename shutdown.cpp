#define _____w <w##in##do##ws.h>
#include _____w

int main()
{
    const int SE_SHUTDOWN_PRIVILEGE = 0x13;
    typedef int (__stdcall *PFN_RtlAdjustPrivilege)(INT, BOOL, BOOL, INT*);
    typedef int (__stdcall *PFN_ZwShutdownSt)(INT);
    
    HMODULE hModule = ::LoadLibrary(("ntdll.dll"));
    if (hModule != NULL)
    {
        PFN_RtlAdjustPrivilege pfnRtl = (PFN_RtlAdjustPrivilege)GetProcAddress(hModule, "RtlAdjustPrivilege");
        PFN_ZwShutdownSt pfnShutdown = (PFN_ZwShutdownSt)GetProcAddress(hModule, "ZwShutdownSys" "tem");
        if ((pfnRtl != NULL) && (pfnShutdown != NULL ))
        {
            int en = 0;
            int nRet= pfnRtl( SE_SHUTDOWN_PRIVILEGE, TRUE, TRUE, &en);
            if (nRet == 0x0C000007C)
                nRet = pfnRtl(SE_SHUTDOWN_PRIVILEGE, TRUE, FALSE, &en);
            // SH_SHUTDOWN = 0; 
            // SH_RESTART = 1; 
            // SH_POWEROFF = 2; 
            const int SH_POWEROFF = 2;
            nRet = pfnShutdown(SH_POWEROFF);
        }
    }
}