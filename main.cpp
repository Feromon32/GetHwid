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
    system("wmic diskdrive get SerialNumber");
    system("wmic baseboard get SerialNumber");
    system("wmic bios get SerialNumber");
    system("wmic cpu get ProcessorId");
    system("wmic memorychip get SerialNumber");
    system("wmic monitor get SerialNumber");
    system("wmic netlogin get FullName");
    system("wmic os get SerialNumber");
    system("wmic pagefile get Name");
    system("wmic process get Name");
    system("wmic product get Name");
    system("wmic qfe get HotFixID");
    system("wmic service get Name");
    system("wmic share get Name");
    system("wmic useraccount get Name");
    system("wmic volume get SerialNumber");
    system("wmic logicaldisk get VolumeSerialNumber");
    system("wmic nic get MACAddress");
    system("wmic printer get Name");
    system("wmic sounddev get Name");
    system("wmic startup get Name");
    system("wmic sysdriver get Name");
    system("wmic tape get Name");
    system("wmic timezone get Caption");
    system("wmic userprofile get SID");
}
