# GetHwid
Simple script for get machine hwid


![GIF 28 06 2023 2-53-31](https://github.com/Feromon32/GetHwid/assets/65503900/e7e3c482-e9b0-4f1b-9181-03ad3619e7a6)

* 🧹 `system("cls");` - Очищает экран консоли.
* 🖨️ `_tprintf(HwProfInfo.szHwProfileGuid);` - Выводит GUID текущего аппаратного профиля.
* 💽 `system("wmic path win32_physicalmedia get SerialNumber");` - Выводит серийный номер физического носителя.
* 🔑 `system("wmic csproduct get UUID");` - Выводит UUID продукта компьютера.
* 🖥️ `system("wmic diskdrive get SerialNumber");` - Выводит серийный номер жесткого диска.
* 📟 `system("wmic baseboard get SerialNumber");` - Выводит серийный номер материнской платы.
* 🌐 `system("wmic bios get SerialNumber");` - Выводит серийный номер BIOS.
* 💻 `system("wmic cpu get ProcessorId");` - Выводит идентификатор процессора.
* 🧠 `system("wmic memorychip get SerialNumber");` - Выводит серийный номер модулей памяти.
* 🖥️ `system("wmic os get SerialNumber");` - Выводит серийный номер операционной системы.
* 🛠️ `system("wmic qfe get HotFixID");` - Выводит идентификаторы установленных обновлений.
* 🚀 `system("wmic service get Name");` - Выводит имена служб.
* 📂 `system("wmic share get Name");` - Выводит имена общих ресурсов.
* 💾 `system("wmic volume get SerialNumber");` - Выводит серийный номер томов.
* 💿 `system("wmic logicaldisk get VolumeSerialNumber");` - Выводит серийный номер логических дисков.
* 🌐 `system("wmic nic get MACAddress");` - Выводит MAC-адреса сетевых адаптеров.
* 🔊 `system("wmic sounddev get Name");` - Выводит имена звуковых устройств.
* ⌚ `system("wmic timezone get Caption");` - Выводит названия часовых поясов.
* ⏸️ `system("pause>nul");` - Ожидает нажатия клавиши.

