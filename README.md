# GetHwid
Simple script for get machine hwid


![GIF 28 06 2023 2-53-31](https://github.com/Feromon32/GetHwid/assets/65503900/e7e3c482-e9b0-4f1b-9181-03ad3619e7a6)

* 🧹 `system("cls");` - Clears console screen.
* 🖨️ `_tprintf(HwProfInfo.szHwProfileGuid);` - Outputs GUID of the current equipment profile.
* 💽 `system("wmic path win32_physicalmedia get SerialNumber");` - Outputs the serial number of the physical media.
* 🔑 `system("wmic csproduct get UUID");` - Outputs the UUID of the computer product.
* 🖥️ `system("wmic diskdrive get SerialNumber");` - Outputs the serial number of the hard drive.
* 📟 `system("wmic baseboard get SerialNumber");` - Outputs the serial number of the motherboard.
* 🌐 `system("wmic bios get SerialNumber");` - Outputs BIOS serial number.
* 💻 `system("wmic cpu get ProcessorId");` - Outputs processor ID.
* 🧠 `system("wmic memorychip get SerialNumber");` ` - Outputs memory module serial number.
* 🖥️ `system("wmic os get SerialNumber");` - Outputs serial number of operating system.
* 🛠️ `system("wmic qfe get HotFixID");` - Outputs IDs of installed updates.
* 🚀 `system("wmic service get Name");` - Outputs service names.
* 📂 `system("wmic share get Name");` - Outputs shared resource names.
* 💾 `system("wmic volume get SerialNumber");` - Outputs volume serial number.
* 💿 `system("wmic logicaldisk get VolumeSerialNumber");` - Outputs the serial number of logical disks.
* 🌐 `system("wmic nic get MACAddress");` - Outputs the MAC addresses of the network adapters.
* 🔊 `system("wmic sounddev get Name");` - Outputs names of sound devices.
* ⌚ `system("wmic timezone get Caption");` - Displays the time zone.
* ⏸️ `system("pause>nul");` - Waiting for key press.

