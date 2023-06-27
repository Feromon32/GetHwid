#include <windows.h>
#include <tchar.h>

void main(void)
{
    HW_PROFILE_INFO   HwProfInfo;
    GetCurrentHwProfile(&HwProfInfo);
    _tprintf(HwProfInfo.szHwProfileGuid);
}
