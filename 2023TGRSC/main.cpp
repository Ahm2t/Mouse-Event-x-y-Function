#include <Windows.h>
#include "auth.hpp"
#include <string>
#include "skStr.h"
#include "Main.h"
#include "İmGui/LicenseSystem.h"
#include "İmGui/ImGui.h"
#include "İmGui/imgui_impl_dx9.h"
#include "İmGui/imgui_impl_win32.h"
std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);

using namespace KeyAuth;
static bool AK47RECO�L = false;
static bool LR300RECO�L = false;
static bool MP5RECO�L = false;
static bool SMGRECO�L = false;
static bool THOMPSONRECO�L = false;
#define FG_RED "\033[31m"
#define FG_PURPLE "\033[35m"
#define FG_GREEN "\033[32m"
#define FG_YELLOW "\033[33m"
#define FG_WHITE "\033[0m"
static bool ALLCONTROLT�ME = false;



api KeyAuthApp(name, ownerid, secret, version, url);
void cerceve() {
	SetConsoleTitle("TGR");
	int horizontal = 0, vertical = 0;
	int x = 280, y = 61; //// alta do�ru

	HWND consoleWindow = GetConsoleWindow();
	SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);

	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO     cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	SetConsoleCursorInfo(out, &cursorInfo);

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 15;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	system("Color  7");
	wcscpy_s(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	HWND hwnd = GetConsoleWindow();
	MoveWindow(hwnd, 0, 0, x, y, TRUE);
	SetWindowPos(hwnd, HWND_TOPMOST, 680, 300, 800, 800, SWP_NOSIZE | SWP_NOZORDER);
	LONG lStyle = GetWindowLong(hwnd, GWL_STYLE);
	lStyle &= ~(WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_SYSMENU);
	SetWindowLong(hwnd, GWL_STYLE, lStyle);
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(console, &csbi);
	COORD scrollbar = {
		csbi.srWindow.Right - csbi.srWindow.Left + 1,
		csbi.srWindow.Bottom - csbi.srWindow.Top + 1
	};
	if (console == 0)
		throw 0;
	else
		SetConsoleScreenBufferSize(console, scrollbar);
	SetWindowLong(hwnd, GWL_EXSTYLE, GetWindowLong(hwnd, GWL_EXSTYLE) | WS_EX_LAYERED);
	SetLayeredWindowAttributes(hwnd, 0, (255 * 100) / 100, LWA_ALPHA);






}
void cerceve2() {
	SetConsoleTitle("TGR");
	int horizontal = 0, vertical = 0;
	int x = 510, y = 270; //// alta do�ru

	HWND consoleWindow = GetConsoleWindow();
	SetWindowLong(consoleWindow, GWL_STYLE, GetWindowLong(consoleWindow, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);

	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO     cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	SetConsoleCursorInfo(out, &cursorInfo);

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 15;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	system("Color  7");
	wcscpy_s(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	HWND hwnd = GetConsoleWindow();
	MoveWindow(hwnd, 0, 0, x, y, TRUE);
	SetWindowPos(hwnd, HWND_TOPMOST, 680, 300, 800, 800, SWP_NOSIZE | SWP_NOZORDER);
	LONG lStyle = GetWindowLong(hwnd, GWL_STYLE);
	lStyle &= ~(WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_SYSMENU);
	SetWindowLong(hwnd, GWL_STYLE, lStyle);
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(console, &csbi);
	COORD scrollbar = {
		csbi.srWindow.Right - csbi.srWindow.Left + 1,
		csbi.srWindow.Bottom - csbi.srWindow.Top + 1
	};
	if (console == 0)
		throw 0;
	else
		SetConsoleScreenBufferSize(console, scrollbar);
	SetWindowLong(hwnd, GWL_EXSTYLE, GetWindowLong(hwnd, GWL_EXSTYLE) | WS_EX_LAYERED);
	SetLayeredWindowAttributes(hwnd, 0, (255 * 100) / 100, LWA_ALPHA);






}


int main()
{

	cerceve();
	KeyAuthApp.init();
	if (!KeyAuthApp.data.success)
	{
		std::cout << skCrypt("\n Status: ") << KeyAuthApp.data.message;
		Sleep(1500);
		exit(0);
	}


	KeyAuthApp.check();


	int option;
	std::string username;
	std::string password;
	std::string key;

	std::cout << FG_WHITE " ->", Sleep(50); std::cout << FG_GREEN " L", Sleep(50); std::cout << "i", Sleep(50); std::cout << "c", Sleep(50); std::cout << "e", Sleep(50); std::cout << "n", Sleep(50); std::cout << "s", Sleep(50); std::cout << "e", Sleep(50); std::cout << " ", Sleep(50); std::cout << "K", Sleep(50); std::cout << "e", Sleep(50); std::cout << "y : ", Sleep(50);

	std::cin >> key;
	KeyAuthApp.license(key);

	if (!KeyAuthApp.data.success)
	{
		std::cout << skCrypt("\n Status: ") << KeyAuthApp.data.message;
		Sleep(1500);
		exit(0);
	}
	system("cls");

	MessageBox(0, "Login Successful", "TGR ", MB_OK | MB_ICONASTERISK);


	cerceve2();

	std::cout << FG_GREEN << skCrypt("\n USER DATA:");
	std::cout << FG_WHITE << skCrypt("\n Username: ") << KeyAuthApp.data.username;
	std::cout << FG_WHITE << skCrypt("\n Hardware-Id: ") << KeyAuthApp.data.hwid;
	std::cout << FG_GREEN << skCrypt("\n Create date: ") << tm_to_readable_time(timet_to_tm(string_to_timet(KeyAuthApp.data.createdate)));
	std::cout << FG_WHITE << skCrypt("\n Last login: ") << tm_to_readable_time(timet_to_tm(string_to_timet(KeyAuthApp.data.lastlogin)));
	std::cout << FG_GREEN << skCrypt("\n Subscription name(s): ");
	std::string subs;
	for (std::string value : KeyAuthApp.data.subscriptions)subs += value + " ";
	std::cout << subs;
	std::cout << FG_WHITE << skCrypt("\n Subscription expiry: ") << tm_to_readable_time(timet_to_tm(string_to_timet(KeyAuthApp.data.expiry)));

	KeyAuthApp.check();

	SetConsoleTitle("%1");
	Sleep(50);
	SetConsoleTitle("%2");
	Sleep(50);
	SetConsoleTitle("%3");
	Sleep(50);
	SetConsoleTitle("%4");
	Sleep(50);
	SetConsoleTitle("%5");
	Sleep(50);
	SetConsoleTitle("%6");
	Sleep(50);
	SetConsoleTitle("%7");
	Sleep(50);
	SetConsoleTitle("%8");
	Sleep(50);
	SetConsoleTitle("%9");
	Sleep(50);
	SetConsoleTitle("%10");

	SetConsoleTitle("%11");
	Sleep(50);
	SetConsoleTitle("%12");
	Sleep(50);
	SetConsoleTitle("%13");
	Sleep(50);
	SetConsoleTitle("%14");
	Sleep(50);
	SetConsoleTitle("%15");
	Sleep(50);
	SetConsoleTitle("%16");
	Sleep(50);
	SetConsoleTitle("%17");
	Sleep(50);
	SetConsoleTitle("%18");
	Sleep(50);
	SetConsoleTitle("%19");
	Sleep(50);
	SetConsoleTitle("%20");

	SetConsoleTitle("%21");
	Sleep(50);
	SetConsoleTitle("%22");
	Sleep(50);
	SetConsoleTitle("%23");
	Sleep(50);
	SetConsoleTitle("%24");
	Sleep(50);
	SetConsoleTitle("%25");
	Sleep(50);
	SetConsoleTitle("%26");
	Sleep(50);
	SetConsoleTitle("%27");
	Sleep(50);
	SetConsoleTitle("%28");
	Sleep(50);
	SetConsoleTitle("%29");
	Sleep(50);
	SetConsoleTitle("%30");

	SetConsoleTitle("%31");
	Sleep(50);
	SetConsoleTitle("%32");
	Sleep(50);
	SetConsoleTitle("%33");
	Sleep(50);
	SetConsoleTitle("%34");
	Sleep(50);
	SetConsoleTitle("%35");
	Sleep(50);
	SetConsoleTitle("%36");
	Sleep(50);
	SetConsoleTitle("%37");
	Sleep(50);
	SetConsoleTitle("%38");
	Sleep(50);
	SetConsoleTitle("%39");
	Sleep(50);
	SetConsoleTitle("%40");

	SetConsoleTitle("%41");
	Sleep(50);
	SetConsoleTitle("%42");
	Sleep(50);
	SetConsoleTitle("%43");
	Sleep(50);
	SetConsoleTitle("%44");
	Sleep(50);
	SetConsoleTitle("%45");
	Sleep(50);
	SetConsoleTitle("%46");
	Sleep(50);
	SetConsoleTitle("%47");
	Sleep(50);
	SetConsoleTitle("%48");
	Sleep(50);
	SetConsoleTitle("%49");
	Sleep(50);
	SetConsoleTitle("%50");

	SetConsoleTitle("%51");
	Sleep(50);
	SetConsoleTitle("%52");
	Sleep(50);
	SetConsoleTitle("%53");
	Sleep(50);
	SetConsoleTitle("%54");
	Sleep(50);
	SetConsoleTitle("%55");
	Sleep(50);
	SetConsoleTitle("%56");
	Sleep(50);
	SetConsoleTitle("%57");
	Sleep(50);
	SetConsoleTitle("%58");
	Sleep(50);
	SetConsoleTitle("%59");
	Sleep(50);
	SetConsoleTitle("%60");

	SetConsoleTitle("%61");
	Sleep(50);
	SetConsoleTitle("%62");
	Sleep(50);
	SetConsoleTitle("%63");
	Sleep(50);
	SetConsoleTitle("%64");
	Sleep(50);
	SetConsoleTitle("%65");
	Sleep(50);
	SetConsoleTitle("%66");
	Sleep(50);
	SetConsoleTitle("%67");
	Sleep(50);
	SetConsoleTitle("%68");
	Sleep(50);
	SetConsoleTitle("%69");
	Sleep(50);
	SetConsoleTitle("%70");

	SetConsoleTitle("%71");
	Sleep(50);
	SetConsoleTitle("%72");
	Sleep(50);
	SetConsoleTitle("%73");
	Sleep(50);
	SetConsoleTitle("%74");
	Sleep(50);
	SetConsoleTitle("%75");
	Sleep(50);
	SetConsoleTitle("%76");
	Sleep(50);
	SetConsoleTitle("%77");
	Sleep(50);
	SetConsoleTitle("%78");
	Sleep(50);
	SetConsoleTitle("%79");
	Sleep(50);
	SetConsoleTitle("%80");

	SetConsoleTitle("%81");
	Sleep(50);
	SetConsoleTitle("%82");
	Sleep(50);
	SetConsoleTitle("%83");
	Sleep(50);
	SetConsoleTitle("%84");
	Sleep(50);
	SetConsoleTitle("%85");
	Sleep(50);
	SetConsoleTitle("%86");
	Sleep(50);
	SetConsoleTitle("%87");
	Sleep(50);
	SetConsoleTitle("%88");
	Sleep(50);
	SetConsoleTitle("%89");
	Sleep(50);
	SetConsoleTitle("%90");

	SetConsoleTitle("%91");
	Sleep(50);
	SetConsoleTitle("%92");
	Sleep(50);
	SetConsoleTitle("%93");
	Sleep(50);
	SetConsoleTitle("%94");
	Sleep(50);
	SetConsoleTitle("%95");
	Sleep(50);
	SetConsoleTitle("%96");
	Sleep(50);
	SetConsoleTitle("%97");
	Sleep(50);
	SetConsoleTitle("%98");
	Sleep(50);
	SetConsoleTitle("%99");
	Sleep(120);
	SetConsoleTitle("%100");
	std::cout << skCrypt("\n ");
	std::cout << skCrypt("\n ");
	std::cout << skCrypt("\n ");
	std::cout << FG_GREEN "W", Sleep(80); std::cout << FG_GREEN "E", Sleep(80); std::cout << "L", Sleep(80); std::cout << "C", Sleep(80); std::cout << "O", Sleep(80); std::cout << "M", Sleep(80); std::cout << "E", Sleep(80); std::cout << " ", Sleep(80); std::cout << "T", Sleep(80); std::cout << "O", Sleep(80); std::cout << " ", Sleep(80); std::cout << "T", Sleep(80); std::cout << "G", Sleep(80); std::cout << "R", Sleep(80); std::cout << " S", Sleep(80); std::cout << "O", Sleep(80); std::cout << "F", Sleep(80); std::cout << "T", Sleep(80); std::cout << "W", Sleep(80); std::cout << "A", Sleep(80); std::cout << "R", Sleep(80); std::cout << "E", Sleep(80);
	Sleep(500);
	MessageBox(0, "ENTER MENU SUCCESSFUL", "TGR Software ", MB_OK | MB_ICONASTERISK);
	Beep(523, 500);
	system("cls");

	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
	std::cout << FG_GREEN << skCrypt("\n IP address: ") << KeyAuthApp.data.ip;
	system("cls");
	WindownsMain(0, 0, 0, 0);


}

std::string tm_to_readable_time(tm ctx) {
	char buffer[80];

	strftime(buffer, sizeof(buffer), "%a %m/%d/%y %H:%M:%S %Z", &ctx);

	return std::string(buffer);
}

static std::time_t string_to_timet(std::string timestamp) {
	auto cv = strtol(timestamp.c_str(), NULL, 10); // long

	return (time_t)cv;
}

static std::tm timet_to_tm(time_t timestamp) {
	std::tm context;

	localtime_s(&context, &timestamp);

	return context;
}
