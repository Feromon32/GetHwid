#include <windows.h>
#include <tchar.h>

void setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
}

void main(void)
{
    HW_PROFILE_INFO   HwProfInfo;
    GetCurrentHwProfile(&HwProfInfo);

    system("cls");
    setcolor(2);
    _tprintf(HwProfInfo.szHwProfileGuid);
    // other info
    _tprintf(TEXT("\n"));
    system("wmic path win32_physicalmedia get SerialNumber");
    system("wmic csproduct get UUID");
    system("wmic diskdrive get SerialNumber");
    system("wmic baseboard get SerialNumber");
    system("wmic bios get SerialNumber");
    system("wmic cpu get ProcessorId");
    system("wmic memorychip get SerialNumber");
    system("wmic os get SerialNumber");
    system("wmic volume get SerialNumber");
    system("wmic logicaldisk get VolumeSerialNumber");
    system("wmic nic get MACAddress");
    //system("wmic sounddev get Name"); //if need uncommnet
    //system("wmic timezone get Caption"); //if need uncommnet
    system("pause>nul");
    main();
}
