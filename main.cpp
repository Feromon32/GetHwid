#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include <string>
#include <vector>
#include <sstream>
void ccolor
(WORD fclr) {
	HANDLE
		hcnsl =
		GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(
		hcnsl,
		fclr);
}
void
clrconsole() {
	system("cls");
}
void
phed() {
	ccolor(14);
	std::cout << "==== System Information Checker ====" << std::endl;
	std::cout << std::
		endl;
	ccolor
	(7);
}
void prmen(
) {
	ccolor(11
	);
	std::cout << "Select the information you want to check:" << std::endl;
	std::cout <<
		"1. HW Profile Info" << std::endl;
	std::cout <<
		"2. Serial Number (Win32 Physical Media)" << std::endl;
	std::cout <<
		"3. UUID (CSProduct)" << std::endl;
	std::cout << "4. Serial Number (Disk Drive)" << std
		::endl;
	std::cout << "5. Serial Number (Baseboard)" << std::endl;
	std::cout <<
		"6. Serial Number (BIOS)" << std::endl;
	std::cout << "7. Processor ID (CPU)" << std::
		endl;
	std::cout << "8. Serial Number (Memory Chip)" << std::endl;
	std::cout <<
		"9. Serial Number (Operating System)" << std::endl;
	std::cout <<
		"10. Serial Number (Volume)" << std::endl;
	std::cout <<
		"11. Volume Serial Number (Logical Disk)" << std::endl;
	std::cout <<
		"12. MAC Address (NIC)" << std::endl;
	std::cout << "0. Exit" << std::endl;
	ccolor(7);
}
std::string
excomm(const
	std::string& forcom
) {
	std::string forout
		;
	char forbuf[128];
	FILE* forpipe = _popen(
		forcom.c_str(), "r")
		;
	if (forpipe) {
		while (!
			feof(forpipe)) {
			if (fgets
			(forbuf, 128,
				forpipe) != nullptr)
				forout +=
				forbuf;
		}
		_pclose(
			forpipe);
	}
	return
		forout;
}
std::string
bserial(
) {
	const int
		bsize = 255;
	char
		buf[
			bsize];
	std::
		string serl;
	if (GetSystemFirmwareTable('RSMB', 0,
		buf,
		bsize) != 0) {
		serl = std::
			string(buf,
				bsize);
		serl.erase(
			std::remove(
				serl.begin()
				, serl.end(),
				'\0'), serl.
			end());
	}
	return
		serl;
}
std::
vector<std::string>
memser
() {
	std::string
		fkcm =
		"wmic memorychip get serialnumber";
	std::string
		outp =
		excomm(
			fkcm);
	std::vector
		<std::string>
		sernum;
	std::
		istringstream iss(
			outp);
	std::string
		line;
	std::getline(
		iss, line);
	while (std
		::getline(iss, line))
	{
		if (!line.empty())
			sernum.
			push_back(line);
	}
	return
		sernum;
}
void
pinfo()
{
	clrconsole();
	ccolor(11);
	std::cout << "=== HW Profile Info ===" << std::endl;
	ccolor(2);
	HW_PROFILE_INFO
		hpofino;
	GetCurrentHwProfile(&
		hpofino);
	std::
		wcout << hpofino.
		szHwProfileGuid << std::endl;
	ccolor(7);
	std::cout << std::endl;
	system("pause");
}
void
serr(
	const char*
	wmiccmd) {
	clrconsole();
	ccolor(11);
	std::cout << "=== Serial Number ===" << std::endl;
	ccolor(2);
	if (wmiccmd ==
		"wmic bios get serialnumber") {
		std::string
			sernummx =
			bserial(
			);
		if (!sernummx.
			empty())std::cout <<
			sernummx << std::
			endl;
		else std::cout << "Unable to retrieve BIOS serial number." << std::endl;
	}
	else
		if (wmiccmd ==
			"wmic memorychip get serialnumber") {
			std::vector<std::string>
				memseria =
				memser
				();
			if (!
				memseria.
				empty()) {
				for (const std::string&
					serri :
					memseria)
				{
					std::cout <<
						serri << std::
						endl;
				}
			}
			else {
				std::cout << "Unable to retrieve memory chip serial numbers." << std::
					endl;
			}
		}
		else {
			std::string
				foroutxv =
				excomm(
					wmiccmd);
			std::
				cout << foroutxv;
		}
	ccolor(7);
	std::cout << std::endl;
	system("pause");
}
void
chouice(int
	fchoice) {
	switch (
		fchoice) {
	case 0:exit(
		0);
	case 1:
		pinfo()
			;
		break;
	case 2:
		serr(
			"wmic path win32_physicalmedia get SerialNumber");
		break;
	case 3:
		serr(
			"wmic csproduct get UUID");
		break;
	case 4:
		serr(
			"wmic diskdrive get SerialNumber");
		break;
	case 5:
		serr(
			"wmic baseboard get SerialNumber");
		break;
	case 6:
		serr(
			"wmic bios get serialnumber");
		break;
	case 7:
		serr(
			"wmic cpu get ProcessorId");
		break;
	case 8:
		serr(
			"wmic memorychip get serialnumber");
		break;
	case 9:
		serr(
			"wmic os get SerialNumber /value");
		break;
	case 10:
		serr(
			"wmic volume get SerialNumber");
		break;
	case 11:
		serr(
			"wmic logicaldisk get VolumeSerialNumber");
		break;
	case 12:
		serr(
			"wmic nicconfig get MACAddress");
		break;
	default:
		clrconsole();
		ccolor(12);
		std::cout << "Invalid choice. Please try again." << std::endl;
		ccolor(7);
		std::cout << std::endl;
		system("pause");
		break;
	}
}
int main() {
	while (true) {
		clrconsole();
		phed();
		prmen();
		int
			fchn;
		std::cout <<
			"Enter your choice: ";
		std::cin >>
			fchn;
		std::cout <<
			std::endl;
		chouice(
			fchn);
	}
	return 0;
}
