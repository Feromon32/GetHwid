#include <windows.h>
#include <tchar.h>

void main(void)
{
    HW_PROFILE_INFO   HwProfInfo;
    GetCurrentHwProfile(&HwProfInfo);
    _tprintf(HwProfInfo.szHwProfileGuid);
    // other info
    system("wmic path win32_physicalmedia get SerialNumber");
    system("wmic csproduct get UUID");
}
