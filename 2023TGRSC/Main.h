#pragma once
#include "İmGui/ImGui.h"
#include "İmGui/imgui_impl_dx9.h"
#include "İmGui/imgui_impl_win32.h"
#include <d3d9.h>
#include <tchar.h>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <random>
#include <thread>
#include "31key.h"
#include "xorstr.h"
#include <vector>
#include "Fonts.h"
#include <d3d9.h>
#pragma comment(lib,"d3d9.lib")
#include <D3dx9tex.h>
#pragma comment(lib, "D3dx9")
#include "RecoilTable.h"
#pragma once
#include "İmGui/imgui_impl_dx8.h"
#include <iostream>
#include <windows.h>
#include <thread>

#include <d3d9.h>
#pragma comment(lib,"d3d9.lib")
#include <thread>
#include <random>
#include "termcolor.hpp"

#include <iostream>
#include <windows.h>
#include <thread>
#include <random>

#include <d3d9.h>
#pragma comment(lib,"d3d9.lib")
#include <D3dx9tex.h>
#pragma comment(lib, "D3dx9")


#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include <psapi.h>  
#include <Windows.h>
#include <string>
#include <cassert>
#include <emmintrin.h>
#include <tlhelp32.h>
#include <winternl.h>

#include "winioctl.h"
static int selectedrenk = 0;
static const char* renk[] = { "Green", "Red","Purple", "Yellow" };
int cx = 0;
int cy = 0;
HDC ragedc = GetDC(HWND_DESKTOP);
float crosshairsize = 9;
bool CrosshairToggle = false;


bool ses = false;
bool crosshairons = false;
IDirect3DTexture9* ABCAlogo;
bool loader_active = true;
HWND main_hwnd = nullptr;
static int Tabs = 3;

static int currentColumn = 0;;
float Sensitivity = 0.4; int FOV = 90;





static bool AntiAfkk = false;
static bool Furancee = false;

#include "31key.h"
int bir;
int iki;
int selectedbgrade;
static bool autoupgradee = false;

static bool keyb, random_active, show_random, hpfrei, randomonline, randomxy_active, show_xycontrol, controlxy_active, show_another_window, reconline, hip_active, ak_active, lr_active, mp5_active, thompson_active, custom_active, semi_active, m249_active, python_active, m39_active, bMuzzleBoost, holo_active, sniper_active, simple_active, x16_active, silencer_active, boost_active, bRapidf = false;
static bool g_open = true;
static bool autoloot = false;
static bool hidemenu = false;

static bool sound = false;
int birinci = 0;
int ikinci = 255;
int ucuncu = 0;
static int ak, lr, mp5, custom, thompson, semi, m249, python, xscope, xxscope, smscope, hlscope, silencer, mboost = 1;
static int nonests = 3;
static int nonet = 2;
static int nonetts = 2;
static int XSCALE = 1;
static int YSCALE = 1;
static int width = 400;
static int height = 250;

static float rpdelay = 50;
static float game_sensitivity = 0.2;
static float XCONTROL = 1;
static float YCONTROL = 1;
static bool AutoCode = false;
static bool AutoUpgrade = false;
static bool afk = false;
static bool silahlar = false;
static bool eklentiler = false;

bool _showAnotherWindow = false;
bool show_app_main_menu_bar = true;
static float birincirenk = 1.0f;
static float ikincirenk = 0.0f;

static float ucuncurenk = 0.0f;
using namespace std;
static bool XYAMK = false;


static const char* bgrade[] = { "Wood","Stone", "Metal","HighQuality" };


std::string NAMEEA = "8243623HGABBBACX"; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string OWNERRR = "6BcmKCnNEt"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string SECRET99 = "1677a59b672fac45b1d410302aa36613c863a3c21b47c89f3fcb3b9845d4ee04"; // app secret, the blurred text on licenses tab and other tabs
std::string VERRRS = "1.0"; // leave alone unless you've changed version on website
std::string urrl99 = "https://keyauth.win/api/1.2/"; // change if you're self-hosting

namespace CurrentWeapon {
	double BarrelAttachment() {

		if (silencer_active == true) {
			if (m249_active == true)
				Multiplyer::Barrel.Suppressor = 0.75;
			if (custom_active == true)
				Multiplyer::Barrel.Suppressor = 0.85;
			if (simple_active == true || holo_active == true)
				return 0.8;
			if (sniper_active == true && silencer_active == true)
				return 1.0;
			else
				return Multiplyer::Barrel.Suppressor;
		}
		else if (bMuzzleBoost == true) {
			return Multiplyer::Barrel.None;
		}
		else
			return Multiplyer::Barrel.None;
	}
	double ScopeAttachment() {
		if (sniper_active == true) {
			if (custom_active == true || thompson_active == true) {
				if (sniper_active == true)
					return Multiplyer::Scope.x8 + 0.75;
			}
			return Multiplyer::Scope.x8;
		}
		if (x16_active == true) {
			if (custom_active == true || thompson_active == true) {
				if (x16_active == true)
					return Multiplyer::Scope.x16 + 0.75;
			}
			return Multiplyer::Scope.x16;
		}
		else if (simple_active == true) {
			if (custom_active == true || thompson_active == true) {
				if (simple_active == true)
					return Multiplyer::Scope.Simple + 0.1;
			}
			return Multiplyer::Scope.Simple;
		}

		else if (holo_active == true) {
			if (custom_active == true || thompson_active == true) {
				if (holo_active == true)
					return Multiplyer::Scope.Holo + 0.3;
			}
			return Multiplyer::Scope.Holo;
		}
		else
			return Multiplyer::Scope.None;
	}
	double x(int b) {

		if (randomxy_active == false) {

			if (ak_active) {
				return (Recoil_Ak47[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (lr_active) {
				return (Recoil_Lr300[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (mp5_active) {
				return (Recoil_Mp5a4[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (thompson_active) {
				return (Recoil_Thompson_g[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (custom_active) {
				return (Recoil_Custom_g[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (m249_active) {
				return (Recoil_M249[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (semi_active) {
				return (Recoil_Semi_r[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (python_active) {
				return (python_t[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else if (m39_active) {
				return (m39_t[b].x * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / XCONTROL;
			}
			else
				return 0;
		}
		if (randomxy_active == true) {                                                                 //X RANDOMIZATION ON AND OFF
			if (ak_active) {
				return ((Recoil_Ak47[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (lr_active) {
				return ((Recoil_Lr300[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (mp5_active) {
				return ((Recoil_Mp5a4[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (thompson_active) {
				return ((Recoil_Thompson_g[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (custom_active) {
				return ((Recoil_Custom_g[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (m249_active) {
				return ((Recoil_M249[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (semi_active) {
				return ((Recoil_Semi_r[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (python_active) {
				return ((python_t[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else if (m39_active) {
				return ((m39_t[b].x * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / XCONTROL + rand() % (XSCALE + XSCALE) + (-XSCALE);
			}
			else
				return 0;
		}
	}
	double y(int b) {                                                                                       //Y RANDOMIZATION ON AND OFF
		if (randomxy_active == false) {
			if (ak_active) {
				return (Recoil_Ak47[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (lr_active) {
				return (Recoil_Lr300[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (mp5_active) {
				return (Recoil_Mp5a4[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (thompson_active) {
				return (Recoil_Thompson_g[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (custom_active) {
				return (Recoil_Custom_g[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (m249_active) {
				return (Recoil_M249[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (semi_active) {
				return (Recoil_Semi_r[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (python_active) {
				return (python_t[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else if (m39_active) {
				return (m39_t[b].y * ScopeAttachment() * BarrelAttachment() / 4) / game_sensitivity / YCONTROL;
			}
			else
				return 0;
		}
		if (randomxy_active == true) {


			if (ak_active) {
				return ((Recoil_Ak47[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);
			}
			else if (lr_active) {
				return ((Recoil_Lr300[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else if (mp5_active) {
				return ((Recoil_Mp5a4[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else if (thompson_active) {
				return ((Recoil_Thompson_g[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else if (custom_active) {
				return ((Recoil_Custom_g[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else if (m249_active) {
				return ((Recoil_M249[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else if (semi_active) {
				return ((Recoil_Semi_r[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else if (python_active) {
				return ((python_t[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else if (m39_active) {
				return ((m39_t[b].y * ScopeAttachment()) * BarrelAttachment()) / 4 / game_sensitivity / YCONTROL + rand() % (YSCALE + YSCALE) + (-YSCALE);;
			}
			else
				return 0;
		}

	}
	double Delay() {
		if (ak_active == true)
			return WeaponData::AK47.Delay;
		else if (lr_active == true)
			return WeaponData::LR300.Delay;
		else if (mp5_active == true)
			return WeaponData::MP5.Delay;
		else if (thompson_active == true)
			return WeaponData::THOMPSON.Delay;
		else if (custom_active == true)
			return WeaponData::CUSTOM_SMG.Delay;
		else if (m249_active == true)
			return WeaponData::M249.Delay;
		else if (semi_active == true)
			return WeaponData::SEMI.Delay;
		else if (python_active == true) {
			return WeaponData::PYTHON.Delay;
		}
		else if (m39_active == true) {
			return WeaponData::M39.Delay;
		}

		return 0;
	}
	double Control(int bullet) {
		if (ak_active == true)
			return ControlTime_Ak47[bullet];
		else if (lr_active == true)
			return control_lr[bullet];
		else if (mp5_active == true)
			return control_mp5[bullet];
		else if (thompson_active == true)
			return control_thompson[bullet];
		else if (custom_active == true)
			return control_custom[bullet];
		else if (m249_active == true)
			return WeaponData::M249.Delay;
		else if (semi_active == true)
			return WeaponData::SEMI.Delay;
		else if (python_active == true) {
			return WeaponData::PYTHON.Delay;
		}
		else if (m39_active == true) {
			return WeaponData::M39.Delay;
		}
		return 0;
	}
	int Bullet() {
		if (ak_active == true)
			return Recoil_Ak47.size() - 1;
		else if (lr_active == true)
			return Recoil_Lr300.size() - 1;
		else if (mp5_active == true)
			return Recoil_Mp5a4.size() - 1;
		else if (thompson_active == true)
			return Recoil_Thompson_g.size() - 1;
		else if (custom_active == true)
			return Recoil_Custom_g.size() - 1;
		else if (m249_active == true)
			return Recoil_M249.size() - 1;
		else if (semi_active == true)
			return Recoil_Semi_r.size() - 1;
		else if (python_active == true)
			return python_t.size() - 1;
		else if (m39_active == true)
			return m39_t.size() - 1;
		else
			return 0;
	}
	bool WeaponActive() {
		if (ak_active == true || lr_active == true || mp5_active == true || thompson_active == true || custom_active == true || semi_active == true || m249_active == true || python_active == true || m39_active == true)
			return true;
		else
			return false;
	}

	void RecoilBreak(int count) {
		if (semi_active == true) {
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		if (python_active == true) {
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		if (m39_active == true) {
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		if (semi_active == true) {
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		else if (m249_active == true) {
		}
		else if (semi_active != true || m249_active != true || m39_active != true || python_active != true) {
			if (count == CurrentWeapon::Bullet()) {
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
		}
	}
};
void pQuerySleep(int ms)
{
	LONGLONG timerResolution;
	LONGLONG wantedTime;
	LONGLONG currentTime;
	QueryPerformanceFrequency((LARGE_INTEGER*)&timerResolution);
	timerResolution /= 1000;
	QueryPerformanceCounter((LARGE_INTEGER*)&currentTime);
	wantedTime = currentTime / timerResolution + ms;
	currentTime = 0;
	while (currentTime < wantedTime)
	{
		QueryPerformanceCounter((LARGE_INTEGER*)&currentTime);
		currentTime /= timerResolution;
	}
}
namespace settings {
	void Smoothing(double delay, double control_time, int x, int y) {

		int x_ = 0, y_ = 0, t_ = 0;
		for (int i = 1; i <= (int)control_time; ++i) {
			int xI = i * x / (int)control_time;
			int yI = i * y / (int)control_time;
			int tI = i * (int)control_time / (int)control_time;
			mouse_event(1, (int)xI - (int)x_, (int)yI - (int)y_, 0, 0);
			pQuerySleep((int)tI - (int)t_);
			x_ = xI; y_ = yI; t_ = tI;
		}
		pQuerySleep((int)delay - (int)control_time);
	}
	int IsMuzzleBoost(float Delay) {
		if (bMuzzleBoost == true) {
			float difference = Delay * 0.1f;
			Delay = Delay - difference;
			return (int)Delay + 2;
		}
		else
			return (int)Delay;
	}
	bool RecoilExecution() {

		for (;;) {
			if (CurrentWeapon::WeaponActive() == true)
			{
				if (hip_active == false)
				{
					for (int i = 0; i <= CurrentWeapon::Bullet() && GetAsyncKeyState(VK_LBUTTON) & 0x8000 && GetAsyncKeyState(VK_RBUTTON) & 0x8000; i++)
					{
						Smoothing((int)IsMuzzleBoost((float)CurrentWeapon::Delay()), (int)IsMuzzleBoost(CurrentWeapon::Control(i)), (int)CurrentWeapon::x(i), (int)CurrentWeapon::y(i));
						CurrentWeapon::RecoilBreak(i);
					}

				}
			}

		}

		return false;
	}

	bool Recoils() {


		if (crosshairons == true) {
			for (int i = 0; i < crosshairsize; i++)
			{
				SetPixel(ragedc, cx + i, cy + ((crosshairsize - 1) / 2), RGB(birinci, ikinci, ucuncu));
				SetPixel(ragedc, cx + ((crosshairsize - 1) / 2), cy + i, RGB(birinci, ikinci, ucuncu));
			}
			cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((crosshairsize - 1) / 2);
			cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((crosshairsize - 1) / 2);

			if (crosshairons == false)
				for (int i = 1; i < crosshairsize; i++)
				{
					SetPixel(ragedc, cx + i, cy + ((crosshairsize - 1) / 2), RGB(0, 0, 0));
					SetPixel(ragedc, cx + ((crosshairsize - 1) / 2), cy + i, RGB(0, 0, 0));
				}
		}


		if (GetAsyncKeyState(VK_NUMPAD1)) {

			ak_active = !ak_active;
			if (ak_active == true)
			{

				lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false; python_active = false; m39_active = false;
				Active_Weapon = "AK47";

				Sleep(160);  ak = 2;
			}

			else if (ak_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;

				Active_Weapon = "NONE";
				Sleep(160);  ak = 1; nonet = 2;
			}
		}


		if (GetAsyncKeyState(VK_NUMPAD2)) {

			lr_active = !lr_active;
			if (lr_active == true)
			{
				ak_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false; python_active = false; m39_active = false;
				Active_Weapon = "LR300";

				Sleep(160);  nonet = 2;
			}
			else if (lr_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;

				Active_Weapon = "NONE";
				Sleep(160);  nonet = 2;
			}
		}
		if (GetAsyncKeyState(VK_NUMPAD3)) {

			mp5_active = !mp5_active;
			if (mp5_active == true)
			{
				ak_active = false, lr_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false; python_active = false; m39_active = false;
				Active_Weapon = "MP5";
				Sleep(160);  mp5 = 2;
			}
			else if (mp5_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;

				Active_Weapon = "NONE";

				Sleep(160);  mp5 = 1; nonet = 2;
			}
		}
		if (GetAsyncKeyState(VK_NUMPAD4) != 0) {

			custom_active = !custom_active;
			if (custom_active == true)
			{
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, m249_active = false, semi_active = false; python_active = false; m39_active = false;

				Active_Weapon = "SMG";
				Sleep(160);  custom = 2;
			}
			else if (custom_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;

				Active_Weapon = "NONE";
				Sleep(160);  custom = 1; nonet = 2;
			}
		}
		if (GetAsyncKeyState(VK_NUMPAD5) != 0) {

			thompson_active = !thompson_active;
			if (thompson_active == true)
			{
				ak_active = false, lr_active = false, mp5_active = false, custom_active = false, m249_active = false, semi_active = false; python_active = false; m39_active = false;

				Active_Weapon = "TOMMY";
				Sleep(160);  thompson = 2;
			}
			else if (thompson_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;


				Active_Weapon = "NONE";
				Sleep(160);  thompson = 1; nonet = 2;
			}
		}
		if (GetAsyncKeyState(VK_NUMPAD6) != 0) {

			semi_active = !semi_active;
			if (semi_active == true)
			{
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, m249_active = false, custom_active = false; python_active = false; m39_active = false;

				Active_Weapon = "SEMI";
				Sleep(160);  nonet = 2; semi = 2;
			}
			else if (semi_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;

				Active_Weapon = "NONE";
				Sleep(160);  semi = 1; nonet = 2;
			}
		}
		if (GetAsyncKeyState(VK_NUMPAD8)) {

			m249_active = !m249_active;
			if (m249_active == true)
			{
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, semi_active = false, custom_active = false; python_active = false; m39_active = false;

				Active_Weapon = "M249";
				Sleep(160);  nonet = 2; m249 = 2;
			}
			else if (m249_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;

				Active_Weapon = "NONE";

				Sleep(160);  m249 = 1; nonet = 2;
			}
		}
		if (GetAsyncKeyState(VK_NUMPAD7) != 0) {

			python_active = !python_active;
			if (python_active == true)
			{
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, semi_active = false, custom_active = false; m249_active = false; m39_active = false;

				Active_Weapon = "PYTHON";
				Sleep(160);  nonet = 2; python = 2;
			}
			else if (python_active == false) {
				ak_active = false, lr_active = false, mp5_active = false, thompson_active = false, custom_active = false, m249_active = false, semi_active = false;
				holo_active = false, sniper_active = false, simple_active = false; x16_active = false;
				silencer_active = false;

				Active_Weapon = "NONE";
				Sleep(160);  python = 1; nonet = 2;
			}
		}
		///////Scopes
		if (GetAsyncKeyState(VK_F4)) {
			holo_active = !holo_active;
			if (holo_active == true)
			{
				sniper_active = false, simple_active = false; x16_active = false;

				Active_Scopes = "HOLO";

				Sleep(160);
			}
			else if (holo_active == false) {

				Active_Scopes = "NONE";

				Sleep(160);
			}
		}
		if (GetAsyncKeyState(VK_F2)) {
			sniper_active = !sniper_active;
			if (sniper_active == true)
			{
				holo_active = false, simple_active = false; x16_active = false;

				Active_Scopes = "8X";
				Sleep(160);  xscope = 2;
			}
			else if (holo_active == false) {

				Active_Scopes = "NONE";
				Sleep(160);  xscope = 1;
			}
		}
		if (GetAsyncKeyState(VK_F5)) {
			simple_active = !simple_active;
			if (simple_active == true)
			{
				holo_active = false, sniper_active = false; x16_active = false;

				Active_Scopes = "SIMPLE";
				Sleep(160);  smscope = 2;
			}
			else if (simple_active == false) {

				Active_Scopes = "NONE";
				Sleep(160);  smscope = 1;
			}
		}
		if (GetAsyncKeyState(VK_F3) != 0) {
			x16_active = !x16_active;
			if (x16_active == true)
			{
				holo_active = false, sniper_active = false; simple_active = false;

				Active_Scopes = "16X";
				Sleep(160);  xxscope = 2;
			}
			else if (x16_active == false) {

				Active_Scopes = "NONE";
				Sleep(160);  xxscope = 1;
			}
		}
		if (GetAsyncKeyState(VK_NUMPAD9) != 0) {




		}
		if (GetAsyncKeyState(VK_F6) != 0) {
			silencer_active = !silencer_active;
			if (silencer_active == true)
			{
				Active_Barrel = "SILENCER";
				Sleep(160);  silencer = 2;
			}
			else if (silencer_active == false) {

				Active_Barrel = "NONE";
				Sleep(160);  silencer = 1;
			}


		}
		if (GetAsyncKeyState(VK_NUMPAD9) != 0) {
			x16_active = false; silencer_active = false; simple_active = false;   sniper_active = false; holo_active = false;
			
			python_active = false; m249_active = false; semi_active = false;   thompson_active = false; custom_active = false;
			mp5_active = false; lr_active = false; lr_active = false;
		}


		return false;
	}
}



static std::string random_string(int length)
{
	std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	std::random_device rd;
	std::mt19937 generator(rd());
	std::shuffle(str.begin(), str.end(), generator);
	return str.substr(0, length);    // assumes 32 < number of characters in str         
}
static DWORDLONG random_number(DWORDLONG min, DWORDLONG max)
{
	srand(time(0));
	DWORDLONG out = min + rand() % (max - min + 1);
	return out;
}
std::string randomclassname = random_string(random_number(4, 16));









static LPDIRECT3D9              g_pD3D = NULL;
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static D3DPRESENT_PARAMETERS    g_d3dpp = {};
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void ResetDevice();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

int APIENTRY WindownsMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)settings::RecoilExecution, 0, 0, 0);

	WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, randomclassname.c_str(), NULL };
	RegisterClassEx(&wc);
	main_hwnd = CreateWindow(wc.lpszClassName, randomclassname.c_str(), WS_POPUP, 0, 0, 5, 5, NULL, NULL, wc.hInstance, NULL);

	if (!CreateDeviceD3D(main_hwnd)) {
		CleanupDeviceD3D();
		UnregisterClass(wc.lpszClassName, wc.hInstance);
		return 1;
	}
	ShowWindow(main_hwnd, SW_HIDE);
	UpdateWindow(main_hwnd);

	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.IniFilename = nullptr;
	io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;

	constexpr auto ColorFromBytes = [](uint8_t r, uint8_t g, uint8_t b)
	{
		return ImVec4((float)r / 255.0f, (float)g / 255.0f, (float)b / 255.0f, 1.0f);
	};

	D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice, ABCA, sizeof(ABCA), 100, 100, D3DX_DEFAULT, D3DUSAGE_DYNAMIC, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &ABCAlogo);

	ImGui::GetStyle().FrameRounding = 4.0f;
	ImGui::GetStyle().GrabRounding = 4.0f;

	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.19f, 0.19f, 0.19f, 0.92f);
	colors[ImGuiCol_Border] = ImVec4(0.19f, 0.19f, 0.19f, 0.29f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.40f, 0.54f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
	colors[ImGuiCol_CheckMark] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
	colors[ImGuiCol_Button] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 0.00f, 0.00f, 0.36f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.22f, 0.23f, 0.33f);
	colors[ImGuiCol_Separator] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
	colors[ImGuiCol_Tab] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 0.36f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_DockingPreview] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
	colors[ImGuiCol_DockingEmptyBg] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);

	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
	colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.35f);

	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(8.00f, 8.00f);
	style.FramePadding = ImVec2(5.00f, 2.00f);
	style.ItemSpacing = ImVec2(6.00f, 6.00f);
	style.ItemInnerSpacing = ImVec2(6.00f, 6.00f);
	style.TouchExtraPadding = ImVec2(0.00f, 0.00f);
	style.IndentSpacing = 25;
	style.ScrollbarSize = 15;
	style.GrabMinSize = 10;
	style.WindowBorderSize = 1;
	style.ChildBorderSize = 1;
	style.PopupBorderSize = 1;
	style.FrameBorderSize = 1;
	style.TabBorderSize = 1;
	style.WindowRounding = 7;
	style.ChildRounding = 4;
	style.FrameRounding = 3;
	style.PopupRounding = 4;
	style.ScrollbarRounding = 9;
	style.GrabRounding = 3;
	style.LogSliderDeadzone = 4;
	style.TabRounding = 4;

	ImGui_ImplWin32_Init(main_hwnd);
	ImGui_ImplDX9_Init(g_pd3dDevice);

	DWORD window_flags = ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollbar;
	RECT screen_rect;
	GetWindowRect(GetDesktopWindow(), &screen_rect);
	auto x = float(screen_rect.right - width) / 2.f;
	auto y = float(screen_rect.bottom - height) / 2.f;

	MSG msg;
	ZeroMemory(&msg, sizeof(msg));
	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			continue;
		}
		ImGui_ImplDX9_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		{
			ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_Once);
			ImGui::SetNextWindowSize(ImVec2(width, height));
			ImGui::SetNextWindowBgAlpha(1.0f);


			ImGui::SetNextWindowPos(ImVec2(x, y), ImGuiCond_Once);
			ImGui::SetNextWindowSize(ImVec2(width, height));
			ImGui::SetNextWindowBgAlpha(1.0f);
			ImGui::Begin(" ", &loader_active, window_flags);
			{

				switch (currentColumn) {
					break;
				case 0:
					ImGui::Begin(" ", &loader_active, window_flags);
					{
							settings::Recoils();

						width = 320;
						height = 615;
						ImGui::SameLine(103);
						ImGui::Image(ABCAlogo, ImVec2(113, 113));

						ImGui::Text(" ");

					
						keyb = false;
						width = 340;
						height = 480;

						ImGui::Text(" ");

						ImGui::SameLine(18);
						if (ImGui::Button(XorStr("Main").c_str(), ImVec2(130, 30))) {
							currentColumn = 5;
						}
						ImGui::SameLine(165);
						if (ImGui::Button(XorStr("Misc").c_str(), ImVec2(130, 30))) {
							currentColumn = 2;
						}

						settings::Recoils();


						ImGui::TextColored(ImColor(61, 102, 242), "_________________________________________________________________________");
						ImGui::Text(XorStr(" ").c_str());
						ImGui::Text(XorStr("  [NUM1] AK                [F2] 8x").c_str());
						ImGui::Text(XorStr("  [NUM2] LR300             [F3] 16x ").c_str());
						ImGui::Text(XorStr("  [NUM3] MP5               [F4] Holo").c_str());
						ImGui::Text(XorStr("  [NUM4] SMG               [F5] Simple ").c_str());
						ImGui::Text(XorStr("  [NUM5] Thompson          [F6] Silencer").c_str());
						ImGui::Text(XorStr("  [NUM6] Semi              [NUM9] Reset          ").c_str());
						ImGui::Text(XorStr("  [NUM7] Phyton                         ").c_str());
						ImGui::Text(XorStr("  [NUM8] M249                         ").c_str());

						











						ImGui::Text(XorStr(" ").c_str());

						ImGui::TextColored(ImColor(61, 102, 242), "_________________________________________________________________________");
						ImGui::Text(" ");
				

					
						ImGui::TextColored(ImColor(61, 102, 242), (XorStr("  Weapon: ").c_str()));
						ImGui::SameLine(); ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 12);
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255,255,255), Active_Weapon);
						ImGui::SameLine();
						ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);

						ImGui::TextColored(ImColor(61, 102, 242), (XorStr("Scope: ").c_str()));
						ImGui::SameLine(); ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 12);
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255,255,255), Active_Scopes);
						ImGui::SameLine();
						ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);

						ImGui::TextColored(ImColor(61, 102, 242), (XorStr("Barrel: ").c_str()));
						ImGui::SameLine(); ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 12);
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255,255,255), Active_Barrel);
						ImGui::SameLine();


						ImGui::BeginGroup();


						ImGui::EndGroup();
						ImGui::BeginGroup();

				
						ImGui::EndGroup();
						ImGui::SameLine();
						ImGui::BeginGroup();

						ImGui::EndGroup();
					

					//	if (ImGui::Button(("                Exit                   "))) {
					//		Beep(523, 500);
					//		exit(0);
					//	}





					}
					ImGui::End();
					break;
				case 1:


					HW_PROFILE_INFO hwProfileInfo;
					if (GetCurrentHwProfile(&hwProfileInfo) != NULL) {

					}

					break;
					// BUTTON PAGE WITH SWITCH TO KEYBINDS AND CONFIG
				case 2:
						settings::Recoils();

					width = 300;
					height = 500;

					ImGui::SameLine(85);
					ImGui::Image(ABCAlogo, ImVec2(113, 113));

					ImGui::Text(" ");



					ImGui::SameLine(18);
					if (ImGui::Button(XorStr("Main").c_str(), ImVec2(130, 30))) {
						currentColumn = 0;
					}
					ImGui::SameLine(157);
					if (ImGui::Button(XorStr("Misc").c_str(), ImVec2(130, 30))) {
						currentColumn = 2;
					}





					ImGui::TextColored(ImColor(61, 102, 242), "_________________________________________________________________________");
					ImGui::BeginGroup();
					ImGui::Text(("Sensitivity"));
					ImGui::SliderFloat(("##Sensitivity"), &game_sensitivity, 0.001, 1, ("%.2f"));
					ImGui::Text(("FOV"));
					ImGui::SliderInt(("##FOV"), &FOV, 65, 90);
					ImGui::EndGroup();
					ImGui::BeginGroup();
					ImGui::Checkbox(" Recoil X/Y", &XYAMK);
					if (XYAMK == true) {
					
						ImGui::SliderFloat("X##-", &XCONTROL, 1, 5, "% .2f");
						ImGui::SliderFloat("Y##-", &YCONTROL, 1, 5, "% .2f");

					}

					

					ImGui::Checkbox(" Auto Loot", &autoloot);
				

					if (autoloot == true)
					{

					
						ImGui::TextColored(ImColor(61, 102, 242), "Key:Caps-Lock");
			//			ImGui::Combo(" Key", &selectedItem16x, item16x, IM_ARRAYSIZE(item16x));

						if (GetAsyncKeyState(rpbind) & 0x8000)
						{
							if (autoloot == true)
							{
								keybd_event('H', 5000, 500, 500);


								SetCursorPos(1300, 310);
								Sleep(20);

								SetCursorPos(1400, 310);
								Sleep(20);
								SetCursorPos(1500, 310);
								Sleep(20);
								SetCursorPos(1600, 310);
								Sleep(20);
								SetCursorPos(1700, 310);
								Sleep(20);
								SetCursorPos(1800, 310);
								Sleep(20);
								SetCursorPos(1300, 310);
								Sleep(20);

								SetCursorPos(1300, 410);
								Sleep(20);
								SetCursorPos(1400, 410);
								Sleep(20);
								SetCursorPos(1500, 410);
								Sleep(20);
								SetCursorPos(1600, 410);
								Sleep(20);
								SetCursorPos(1700, 410);
								Sleep(20);
								SetCursorPos(1800, 410);
								Sleep(20);
								SetCursorPos(1300, 510);
								Sleep(20);
								SetCursorPos(1400, 510);
								Sleep(20);
								SetCursorPos(1500, 510);
								Sleep(20);
								SetCursorPos(1600, 510);
								Sleep(20);
								SetCursorPos(1700, 510);
								Sleep(20);
								SetCursorPos(1800, 510);
								Sleep(20);
								SetCursorPos(1300, 610);
								Sleep(20);
								SetCursorPos(1400, 610);
								Sleep(20);
								SetCursorPos(1500, 610);
								Sleep(20);
								SetCursorPos(1600, 610);
								Sleep(20);
								SetCursorPos(1700, 610);
								Sleep(20);
								SetCursorPos(1800, 610);
							}
						}
					}
					ImGui::Checkbox(" Enable Rapid Fire", &bRapidf);
		
					if (bRapidf == true) {
						keyb = true;
					
						keybindi();

						ImGui::Combo(" Key", &selectedItemRP, itemRP, IM_ARRAYSIZE(itemRP));

						ImGui::SliderFloat(" Delay", &rpdelay, 0, 100, "% .0f");


					}

					ImGui::Checkbox(" Anti Afk", &AntiAfkk);

					if (AntiAfkk == true) {
						
						keybd_event(' ', 0, 0, NULL);
						Sleep(20);
						keybd_event(' ', 0, KEYEVENTF_KEYUP, NULL);
						keybd_event(' ', 0, 0, NULL);
						Sleep(20);
						keybd_event(' ', 0, KEYEVENTF_KEYUP, NULL);


					}
					//
					ImGui::Checkbox(" Furance Splitter", &Furancee);


					if (Furancee == true)
					{


						ImGui::TextColored(ImColor(61, 102, 242), "Key:C");


						if (GetAsyncKeyState(0x43) & 0x8000)
						{
							if (Furancee == true)
							{
								SetCursorPos(826, 500);
								Sleep(100);

								// first slot
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
								Sleep(20);
								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
								Sleep(50);
								SetCursorPos(1200, 500);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
								Sleep(30);
								SetCursorPos(1380, 700);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
								// first slot done

								Sleep(50);
								SetCursorPos(1200, 500);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
								Sleep(30);
								SetCursorPos(1450, 700);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

								Sleep(200);
								SetCursorPos(1150, 500);
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
								Sleep(200);
								SetCursorPos(1200, 500);
								Sleep(200);
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
								Sleep(30);
								SetCursorPos(1615, 700);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

							}
						}
					}

				
					ImGui::Checkbox(" Auto upgrade", &autoupgradee);
					if (autoupgradee)
					{
						ImGui::Combo("##Upgrade Item", &selectedbgrade, bgrade, IM_ARRAYSIZE(bgrade));
						if (selectedbgrade == 0) {
							bir = 890;
							iki = 15;
						}
						if (selectedbgrade == 1) {
							bir = 1700;
							iki = 690;
						}
						if (selectedbgrade == 2) {
							bir = 1500;
							iki = 790;
						}
						if (selectedbgrade == 3) {
							bir = 1000;
							iki = 800;

						}
					}


					ImGui::Checkbox(" Crosshair", &CrosshairToggle);
					if (CrosshairToggle == true)
					{


						ImGui::SetNextItemWidth(120);
						ImGui::SliderFloat(" Crosshair Size ##-", &crosshairsize, 1, 50, "% 1.f");

						ImGui::SetNextItemWidth(120);
						ImGui::Combo(" Crosshair Color", &selectedrenk, renk, IM_ARRAYSIZE(renk));
						if (selectedrenk == 0) {
							ikinci = 255;
							ucuncu = 0;
						}
						if (selectedrenk == 1) {
							birinci = 255;
							ikinci = 0;
							ucuncu = 0;
						}
						if (selectedrenk == 2) {
							birinci = 102;
							ikinci = 0;
							ucuncu = 204;
						}
						if (selectedrenk == 3) {
							birinci = 255;
							ikinci = 255;
							ucuncu = 0;
						}
						crosshairons = true;

					}
					else {
						crosshairons = false;


					}
					if (_showAnotherWindow) {
						HWND hwnd = FindWindow(0, " ");
						::SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
						ImGui::SetNextWindowSize(ImVec2(370, 66), ImGuiCond_FirstUseEver);
						ImGui::Begin(" ", &_showAnotherWindow, ImGuiWindowFlags_NoResize);
						ImGui::Text(" ");
						ImGui::Text("Weapon >");
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255, 0, 255), Active_Weapon);
						ImGui::SameLine();
						ImGui::Text("Scope >");
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255, 0, 255), Active_Scopes);
						ImGui::SameLine();
						ImGui::Text("Barrel >");
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255, 0, 255), Active_Barrel);
						ImGui::End();
					}

					ImGui::TextColored(ImColor(61, 102, 242), "_________________________________________________________________________");

					break;
				
					break;
					//KEYBIND PAGE WITH SWITCH TO BUTTON AND CONFIG

				case 4:
					ImGui::Text(" ");




					ImGui::Text(" ");





					if (_showAnotherWindow) {
						HWND hwnd = FindWindow(0, " ");
						::SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
						ImGui::SetNextWindowSize(ImVec2(370, 66), ImGuiCond_FirstUseEver);
						ImGui::Begin(" ", &_showAnotherWindow, ImGuiWindowFlags_NoResize);
						ImGui::Text(" ");
						ImGui::Text("Weapon >");
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255, 0, 255), Active_Weapon);
						ImGui::SameLine();
						ImGui::Text("Scope >");
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255, 0, 255), Active_Scopes);
						ImGui::SameLine();
						ImGui::Text("Barrel >");
						ImGui::SameLine();
						ImGui::TextColored(ImColor(255, 0, 255), Active_Barrel);

						ImGui::End();
					}









				}


			}
			ImGui::End();
		}
		ImGui::EndFrame();

		g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, 0, 1.0f, 0);
		if (g_pd3dDevice->BeginScene() >= 0)
		{
			ImGui::Render();
			ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
			g_pd3dDevice->EndScene();
		}
		if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
		{
			ImGui::UpdatePlatformWindows();
			ImGui::RenderPlatformWindowsDefault();
		}
		HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
		if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET) {
			ResetDevice();
		}
		if (!loader_active) {
			msg.message = WM_QUIT;
		}
	}
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();
	CleanupDeviceD3D();
	DestroyWindow(main_hwnd);
	UnregisterClass(wc.lpszClassName, wc.hInstance);
	return 0;
}


bool CreateDeviceD3D(HWND hWnd)
{
	if ((g_pD3D = Direct3DCreate9(D3D_SDK_VERSION)) == NULL)
		return false;
	ZeroMemory(&g_d3dpp, sizeof(g_d3dpp));
	g_d3dpp.Windowed = TRUE;
	g_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	g_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;
	g_d3dpp.EnableAutoDepthStencil = TRUE;
	g_d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
	g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_ONE;
	if (g_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
		return false;
	return true;
}
void CleanupDeviceD3D()
{
	if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
	if (g_pD3D) { g_pD3D->Release(); g_pD3D = NULL; }
}
void ResetDevice()
{
	ImGui_ImplDX9_InvalidateDeviceObjects();
	HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
	if (hr == D3DERR_INVALIDCALL)
		IM_ASSERT(0);
	ImGui_ImplDX9_CreateDeviceObjects();
}
#ifndef WM_DPICHANGED
#define WM_DPICHANGED 0x02E0
#endif
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
		return true;
	switch (msg)
	{
	case WM_SIZE:
		if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
		{
			g_d3dpp.BackBufferWidth = LOWORD(lParam);
			g_d3dpp.BackBufferHeight = HIWORD(lParam);
			ResetDevice();
		}
		return 0;
	case WM_SYSCOMMAND:
		if ((wParam & 0xfff0) == SC_KEYMENU)
			return 0;
		break;
	case WM_DESTROY:
		::PostQuitMessage(0);
		return 0;
	case WM_DPICHANGED:
		if (ImGui::GetIO().ConfigFlags & ImGuiConfigFlags_DpiEnableScaleViewports)
		{
			const RECT* suggested_rect = (RECT*)lParam;
			::SetWindowPos(hWnd, NULL, suggested_rect->left, suggested_rect->top, suggested_rect->right - suggested_rect->left, suggested_rect->bottom - suggested_rect->top, SWP_NOZORDER | SWP_NOACTIVATE);
		}
		break;
	}
	return ::DefWindowProc(hWnd, msg, wParam, lParam);
}