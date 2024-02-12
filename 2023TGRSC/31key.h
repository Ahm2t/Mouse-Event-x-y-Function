#pragma once
#include <Windows.h>


static float lootkey = VK_DELETE;//ak
static float akbind = VK_NUMPAD0;//ak
static float ikicode = VK_NUMPAD2;//ak
static float bircode = VK_NUMPAD1;//ak
static float dortcode = VK_NUMPAD4;//ak
static float lrbind = VK_NUMPAD1;//lr
static float mpbind = VK_NUMPAD2;//mp5
static float csbind = VK_NUMPAD3;//smg
static float tmbind = VK_NUMPAD4;//thompson
static float smbind = VK_NUMPAD5;//yar� oto
static float m2bind = VK_NUMPAD6;//m2
static float ptbind = VK_NUMPAD8;//python
static float m39bind = VK_NUMPAD9;//m39
static float xxbind = VK_F2;//8x
static float yybind = VK_F3;//16x
static float hhbind = VK_F4;//holo
static float ssbind = VK_F5;//simple
static float slbind = VK_END;//simple
static float rpbind = VK_CAPITAL;//simple
static float chbind = VK_INSERT;//simple

static const char* item[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemikicode[]{ "NONE",
    "VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
};
static const char* itembircode[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
};
static const char* itemdortcode[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
};
static const char* itemL[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemM[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemC[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemT[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemS[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemM2[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemPT[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemM39[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* item8x[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* item16x[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemHL[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemSS[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemSL[]{ "NONE",
	"VK_NUMPAD0",
	"VK_NUMPAD1",
	"VK_NUMPAD2",
	"VK_NUMPAD3",
	"VK_NUMPAD4",
	"VK_NUMPAD5",
	"VK_NUMPAD6",
	"VK_NUMPAD7",
	"VK_NUMPAD8",
	"VK_NUMPAD9",
	"VK_F1",
	"VK_F2",
	"VK_F3",
	"VK_F4",
	"VK_F5",
	"VK_F6",
	"VK_F7",
	"VK_F8",
	"VK_F9",
	"VK_F10",
	"VK_F11",
	"VK_F12",
};
static const char* itemRP[]{ "NONE",
	"CAPSLOCK",
	"F",
	"C",
	"X",
	"Z"
};
static const char* itemCH[]{ "NONE",
"INSERT",
"DELETE",
"END",
"HOME"
};

static int selectedItem = 1;
static int selectedbircode= 1;
static int selectedikicode = 1;
static int selecteddortcode = 1;
static int selectedItemCH = 0;
static int selectedItemL = 2;
static int selectedItemM = 3;
static int selectedItemC = 4;
static int selectedItemT = 5;
static int selectedItemS = 6;
static int selectedItemM2 = 7;
static int selectedItemPT = 9;
static int selectedItemM39 = 10;
static int selectedItem8x = 12;
static int selectedItem16x = 13;
static int selectedItemHL = 14;
static int selectedItemSS = 15;
static int selectedItemWP = 0;
static int selectedItemSC = 0;
static int selectedItemBR = 0;
static int selectedItemSL = 16;
static int selectedItemRP = 1;
static int selectedAUTOLOOT = 1;
const char* Active_Weapon = "NONE";
const char* Active_Scopes = "NONE";
const char* Active_Barrel = "NONE";

static const char* itemWP[]{ Active_Weapon,
"AK47",
"LR300",
"MP5A4",
"CUSTOM",
"TOMMY",
"SEMI",
"M249",
"PYTHON",
"M39"
};
static const char* itemSC[]{ Active_Scopes,
"8x",
"16x",
"HOLO",
"SIMPLE"
};
static const char* itemBR[]{ Active_Barrel,
"Silencer",
};

void codelock() {
	if (selectedbircode == 0) {
		bircode = false;
	}
	if (selectedbircode == 1) {
		bircode = VK_NUMPAD0;
	}
	if (selectedbircode == 2) {
		bircode = VK_NUMPAD1;
	}
	if (selectedbircode == 3) {
		bircode = VK_NUMPAD2;
	}
	if (selectedbircode == 4) {
		bircode = VK_NUMPAD3;
	}
	if (selectedbircode == 5) {
		bircode = VK_NUMPAD4;
	}
	if (selectedbircode == 6) {
		bircode = VK_NUMPAD5;
	}
	if (selectedbircode == 7) {
		bircode = VK_NUMPAD6;
	}
	if (selectedbircode == 8) {
		bircode = VK_NUMPAD7;
	}
	if (selectedbircode == 9) {
		bircode = VK_NUMPAD8;
	}
	if (selectedbircode == 10) {
		bircode = VK_NUMPAD9;
	}
	if (selectedbircode == 11) {
		bircode = VK_F1;
	}
	if (selectedbircode == 12) {
		bircode = VK_F2;
	}
	if (selectedbircode == 13) {
		bircode = VK_F3;
	}
	if (selectedbircode == 14) {
		bircode = VK_F4;
	}
	if (selectedbircode == 15) {
		bircode = VK_F5;
	}
	if (selectedbircode == 16) {
		bircode = VK_F6;
	}
	if (selectedbircode == 17) {
		bircode = VK_F7;
	}
	if (selectedbircode == 18) {
		bircode = VK_F8;
	}
	if (selectedbircode == 19) {
		bircode = VK_F9;
	}
	if (selectedbircode == 20) {
		bircode = VK_F10;
	}
	if (selectedbircode == 21) {
		bircode = VK_F11;
	}
	if (selectedbircode == 21) {
		bircode = VK_F12;
	}
	//////////////////////////// iki
	if (selectedikicode == 0) {
		ikicode = false;
	}
	if (selectedikicode == 1) {
		ikicode = VK_NUMPAD0;
	}
	if (selectedikicode == 2) {
		ikicode = VK_NUMPAD1;
	}
	if (selectedikicode == 3) {
		ikicode = VK_NUMPAD2;
	}
	if (selectedikicode == 4) {
		ikicode = VK_NUMPAD3;
	}
	if (selectedikicode == 5) {
		ikicode = VK_NUMPAD4;
	}
	if (selectedikicode == 6) {
		ikicode = VK_NUMPAD5;
	}
	if (selectedikicode == 7) {
		ikicode = VK_NUMPAD6;
	}
	if (selectedikicode == 8) {
		ikicode = VK_NUMPAD7;
	}
	if (selectedikicode == 9) {
		ikicode = VK_NUMPAD8;
	}
	if (selectedikicode == 10) {
		ikicode = VK_NUMPAD9;
	}
	if (selectedikicode == 11) {
		ikicode = VK_F1;
	}
	if (selectedikicode == 12) {
		ikicode = VK_F2;
	}
	if (selectedikicode == 13) {
		ikicode = VK_F3;
	}
	if (selectedikicode == 14) {
		ikicode = VK_F4;
	}
	if (selectedikicode == 15) {
		ikicode = VK_F5;
	}
	if (selectedikicode == 16) {
		ikicode = VK_F6;
	}
	if (selectedikicode == 17) {
		ikicode = VK_F7;
	}
	if (selectedikicode == 18) {
		ikicode = VK_F8;
	}
	if (selectedikicode == 19) {
		ikicode = VK_F9;
	}
	if (selectedikicode == 20) {
		ikicode = VK_F10;
	}
	if (selectedikicode == 21) {
		ikicode = VK_F11;
	}
	if (selectedikicode == 21) {
		ikicode = VK_F12;
	}
	//////////////////////////////////////////////// �.
	if (selectedbircode == 0) {
		bircode = false;
	}
	if (selectedbircode == 1) {
		bircode = VK_NUMPAD0;
	}
	if (selectedbircode == 2) {
		bircode = VK_NUMPAD1;
	}
	if (selectedbircode == 3) {
		bircode = VK_NUMPAD2;
	}
	if (selectedbircode == 4) {
		bircode = VK_NUMPAD3;
	}
	if (selectedbircode == 5) {
		bircode = VK_NUMPAD4;
	}
	if (selectedbircode == 6) {
		bircode = VK_NUMPAD5;
	}
	if (selectedbircode == 7) {
		bircode = VK_NUMPAD6;
	}
	if (selectedbircode == 8) {
		bircode = VK_NUMPAD7;
	}
	if (selectedbircode == 9) {
		bircode = VK_NUMPAD8;
	}
	if (selectedbircode == 10) {
		bircode = VK_NUMPAD9;
	}
	if (selectedbircode == 11) {
		bircode = VK_F1;
	}
	if (selectedbircode == 12) {
		bircode = VK_F2;
	}
	if (selectedbircode == 13) {
		bircode = VK_F3;
	}
	if (selectedbircode == 14) {
		bircode = VK_F4;
	}
	if (selectedbircode == 15) {
		bircode = VK_F5;
	}
	if (selectedbircode == 16) {
		bircode = VK_F6;
	}
	if (selectedbircode == 17) {
		bircode = VK_F7;
	}
	if (selectedbircode == 18) {
		bircode = VK_F8;
	}
	if (selectedbircode == 19) {
		bircode = VK_F9;
	}
	if (selectedbircode == 20) {
		bircode = VK_F10;
	}
	if (selectedbircode == 21) {
		bircode = VK_F11;
	}
	if (selectedbircode == 21) {
		bircode = VK_F12;
	}


	///////////////////////////////////////////

	if (selecteddortcode == 0) {
		dortcode = false;
	}
	if (selecteddortcode == 1) {
		dortcode = VK_NUMPAD0;
	}
	if (selecteddortcode == 2) {
		dortcode = VK_NUMPAD1;
	}
	if (selecteddortcode == 3) {
		dortcode = VK_NUMPAD2;
	}
	if (selecteddortcode == 4) {
		dortcode = VK_NUMPAD3;
	}
	if (selecteddortcode == 5) {
		dortcode = VK_NUMPAD4;
	}
	if (selecteddortcode == 6) {
		dortcode = VK_NUMPAD5;
	}
	if (selecteddortcode == 7) {
		dortcode = VK_NUMPAD6;
	}
	if (selecteddortcode == 8) {
		dortcode = VK_NUMPAD7;
	}
	if (selecteddortcode == 9) {
		dortcode = VK_NUMPAD8;
	}
	if (selecteddortcode == 10) {
		dortcode = VK_NUMPAD9;
	}
	if (selecteddortcode == 11) {
		dortcode = VK_F1;
	}
	if (selecteddortcode == 12) {
		dortcode = VK_F2;
	}
	if (selecteddortcode == 13) {
		dortcode = VK_F3;
	}
	if (selecteddortcode == 14) {
		dortcode = VK_F4;
	}
	if (selecteddortcode == 15) {
		dortcode = VK_F5;
	}
	if (selecteddortcode == 16) {
		dortcode = VK_F6;
	}
	if (selecteddortcode == 17) {
		dortcode = VK_F7;
	}
	if (selecteddortcode == 18) {
		dortcode = VK_F8;
	}
	if (selecteddortcode == 19) {
		dortcode = VK_F9;
	}
	if (selecteddortcode == 20) {
		dortcode = VK_F10;
	}
	if (selecteddortcode == 21) {
		dortcode = VK_F11;
	}
	if (selecteddortcode == 21) {
		dortcode = VK_F12;
	}

}






























void keybindi() {
	if (selectedItem == 0) {
		akbind = false;
	}
	if (selectedItem == 1) {
		akbind = VK_NUMPAD0;
	}
	if (selectedItem == 2) {
		akbind = VK_NUMPAD1;
	}
	if (selectedItem == 3) {
		akbind = VK_NUMPAD2;
	}
	if (selectedItem == 4) {
		akbind = VK_NUMPAD3;
	}
	if (selectedItem == 5) {
		akbind = VK_NUMPAD4;
	}
	if (selectedItem == 6) {
		akbind = VK_NUMPAD5;
	}
	if (selectedItem == 7) {
		akbind = VK_NUMPAD6;
	}
	if (selectedItem == 8) {
		akbind = VK_NUMPAD7;
	}
	if (selectedItem == 9) {
		akbind = VK_NUMPAD8;
	}
	if (selectedItem == 10) {
		akbind = VK_NUMPAD9;
	}
	if (selectedItem == 11) {
		akbind = VK_F1;
	}
	if (selectedItem == 12) {
		akbind = VK_F2;
	}
	if (selectedItem == 13) {
		akbind = VK_F3;
	}
	if (selectedItem == 14) {
		akbind = VK_F4;
	}
	if (selectedItem == 15) {
		akbind = VK_F5;
	}
	if (selectedItem == 16) {
		akbind = VK_F6;
	}
	if (selectedItem == 17) {
		akbind = VK_F7;
	}
	if (selectedItem == 18) {
		akbind = VK_F8;
	}
	if (selectedItem == 19) {
		akbind = VK_F9;
	}
	if (selectedItem == 20) {
		akbind = VK_F10;
	}
	if (selectedItem == 21) {
		akbind = VK_F11;
	}
	if (selectedItem == 21) {
		akbind = VK_F12;
	}
	//////////////////////

	// 
	//LR
	if (selectedItemL == 0) {
		lrbind = false;
	}
	if (selectedItemL == 1) {
		lrbind = VK_NUMPAD0;
	}
	if (selectedItemL == 2) {
		lrbind = VK_NUMPAD1;
	}
	if (selectedItemL == 3) {
		lrbind = VK_NUMPAD2;
	}
	if (selectedItemL == 4) {
		lrbind = VK_NUMPAD3;
	}
	if (selectedItemL == 5) {
		lrbind = VK_NUMPAD4;
	}
	if (selectedItemL == 6) {
		lrbind = VK_NUMPAD5;
	}
	if (selectedItemL == 7) {
		lrbind = VK_NUMPAD6;
	}
	if (selectedItemL == 8) {
		lrbind = VK_NUMPAD7;
	}
	if (selectedItemL == 9) {
		lrbind = VK_NUMPAD8;
	}
	if (selectedItemL == 10) {
		lrbind = VK_NUMPAD9;
	}
	if (selectedItemL == 11) {
		lrbind = VK_F1;
	}
	if (selectedItemL == 12) {
		lrbind = VK_F2;
	}
	if (selectedItemL == 13) {
		lrbind = VK_F3;
	}
	if (selectedItemL == 14) {
		lrbind = VK_F4;
	}
	if (selectedItemL == 15) {
		lrbind = VK_F5;
	}
	if (selectedItemL == 16) {
		lrbind = VK_F6;
	}
	if (selectedItemL == 17) {
		lrbind = VK_F7;
	}
	if (selectedItemL == 18) {
		lrbind = VK_F8;
	}
	if (selectedItemL == 19) {
		lrbind = VK_F9;
	}
	if (selectedItemL == 20) {
		lrbind = VK_F10;
	}
	if (selectedItemL == 21) {
		lrbind = VK_F11;
	}
	if (selectedItemL == 22) {
		lrbind = VK_F12;
	}
	//MP5
	if (selectedItemM == 0) {
		mpbind = false;
	}
	if (selectedItemM == 1) {
		mpbind = VK_NUMPAD0;
	}
	if (selectedItemM == 2) {
		mpbind = VK_NUMPAD1;
	}
	if (selectedItemM == 3) {
		mpbind = VK_NUMPAD2;
	}
	if (selectedItemM == 4) {
		mpbind = VK_NUMPAD3;
	}
	if (selectedItemM == 5) {
		mpbind = VK_NUMPAD4;
	}
	if (selectedItemM == 6) {
		mpbind = VK_NUMPAD5;
	}
	if (selectedItemM == 7) {
		mpbind = VK_NUMPAD6;
	}
	if (selectedItemM == 8) {
		mpbind = VK_NUMPAD7;
	}
	if (selectedItemM == 9) {
		mpbind = VK_NUMPAD8;
	}
	if (selectedItemM == 10) {
		mpbind = VK_NUMPAD9;
	}
	if (selectedItemM == 11) {
		mpbind = VK_F1;
	}
	if (selectedItemM == 12) {
		mpbind = VK_F2;
	}
	if (selectedItemM == 13) {
		mpbind = VK_F3;
	}
	if (selectedItemM == 14) {
		mpbind = VK_F4;
	}
	if (selectedItemM == 15) {
		mpbind = VK_F5;
	}
	if (selectedItemM == 16) {
		mpbind = VK_F6;
	}
	if (selectedItemM == 17) {
		mpbind = VK_F7;
	}
	if (selectedItemM == 18) {
		mpbind = VK_F8;
	}
	if (selectedItemM == 19) {
		mpbind = VK_F9;
	}
	if (selectedItemM == 20) {
		mpbind = VK_F10;
	}
	if (selectedItemM == 21) {
		mpbind = VK_F11;
	}
	if (selectedItemM == 22) {
		mpbind = VK_F12;
	}
	//SMG
	if (selectedItemC == 0) {
		csbind = false;
	}
	if (selectedItemC == 1) {
		csbind = VK_NUMPAD0;
	}
	if (selectedItemC == 2) {
		csbind = VK_NUMPAD1;
	}
	if (selectedItemC == 3) {
		csbind = VK_NUMPAD2;
	}
	if (selectedItemC == 4) {
		csbind = VK_NUMPAD3;
	}
	if (selectedItemC == 5) {
		csbind = VK_NUMPAD4;
	}
	if (selectedItemC == 6) {
		csbind = VK_NUMPAD5;
	}
	if (selectedItemC == 7) {
		csbind = VK_NUMPAD6;
	}
	if (selectedItemC == 8) {
		csbind = VK_NUMPAD7;
	}
	if (selectedItemC == 9) {
		csbind = VK_NUMPAD8;
	}
	if (selectedItemC == 10) {
		csbind = VK_NUMPAD9;
	}
	if (selectedItemC == 11) {
		csbind = VK_F1;
	}
	if (selectedItemC == 12) {
		csbind = VK_F2;
	}
	if (selectedItemC == 13) {
		csbind = VK_F3;
	}
	if (selectedItemC == 14) {
		csbind = VK_F4;
	}
	if (selectedItemC == 15) {
		csbind = VK_F5;
	}
	if (selectedItemC == 16) {
		csbind = VK_F6;
	}
	if (selectedItemC == 17) {
		csbind = VK_F7;
	}
	if (selectedItemC == 18) {
		csbind = VK_F8;
	}
	if (selectedItemC == 19) {
		csbind = VK_F9;
	}
	if (selectedItemC == 20) {
		csbind = VK_F10;
	}
	if (selectedItemC == 21) {
		csbind = VK_F11;
	}
	if (selectedItemC == 22) {
		csbind = VK_F12;
	}
	//Thompson
	if (selectedItemT == 0) {
		tmbind = false;
	}
	if (selectedItemT == 1) {
		tmbind = VK_NUMPAD0;
	}
	if (selectedItemT == 2) {
		tmbind = VK_NUMPAD1;
	}
	if (selectedItemT == 3) {
		tmbind = VK_NUMPAD2;
	}
	if (selectedItemT == 4) {
		tmbind = VK_NUMPAD3;
	}
	if (selectedItemT == 5) {
		tmbind = VK_NUMPAD4;
	}
	if (selectedItemT == 6) {
		tmbind = VK_NUMPAD5;
	}
	if (selectedItemT == 7) {
		tmbind = VK_NUMPAD6;
	}
	if (selectedItemT == 8) {
		tmbind = VK_NUMPAD7;
	}
	if (selectedItemT == 9) {
		tmbind = VK_NUMPAD8;
	}
	if (selectedItemT == 10) {
		tmbind = VK_NUMPAD9;
	}
	if (selectedItemT == 11) {
		tmbind = VK_F1;
	}
	if (selectedItemT == 12) {
		tmbind = VK_F2;
	}
	if (selectedItemT == 13) {
		tmbind = VK_F3;
	}
	if (selectedItemT == 14) {
		tmbind = VK_F4;
	}
	if (selectedItemT == 15) {
		tmbind = VK_F5;
	}
	if (selectedItemT == 16) {
		tmbind = VK_F6;
	}
	if (selectedItemT == 17) {
		tmbind = VK_F7;
	}
	if (selectedItemT == 18) {
		tmbind = VK_F8;
	}
	if (selectedItemT == 19) {
		tmbind = VK_F9;
	}
	if (selectedItemT == 20) {
		tmbind = VK_F10;
	}
	if (selectedItemT == 21) {
		tmbind = VK_F11;
	}
	if (selectedItemT == 22) {
		tmbind = VK_F12;
	}
	//SAR
	if (selectedItemS == 0) {
		smbind = false;
	}
	if (selectedItemS == 1) {
		smbind = VK_NUMPAD0;
	}
	if (selectedItemS == 2) {
		smbind = VK_NUMPAD1;
	}
	if (selectedItemS == 3) {
		smbind = VK_NUMPAD2;
	}
	if (selectedItemS == 4) {
		smbind = VK_NUMPAD3;
	}
	if (selectedItemS == 5) {
		smbind = VK_NUMPAD4;
	}
	if (selectedItemS == 6) {
		smbind = VK_NUMPAD5;
	}
	if (selectedItemS == 7) {
		smbind = VK_NUMPAD6;
	}
	if (selectedItemS == 8) {
		smbind = VK_NUMPAD7;
	}
	if (selectedItemS == 9) {
		smbind = VK_NUMPAD8;
	}
	if (selectedItemS == 10) {
		smbind = VK_NUMPAD9;
	}
	if (selectedItemS == 11) {
		smbind = VK_F1;
	}
	if (selectedItemS == 12) {
		smbind = VK_F2;
	}
	if (selectedItemS == 13) {
		smbind = VK_F3;
	}
	if (selectedItemS == 14) {
		smbind = VK_F4;
	}
	if (selectedItemS == 15) {
		smbind = VK_F5;
	}
	if (selectedItemS == 16) {
		smbind = VK_F6;
	}
	if (selectedItemS == 17) {
		smbind = VK_F7;
	}
	if (selectedItemS == 18) {
		smbind = VK_F8;
	}
	if (selectedItemS == 19) {
		smbind = VK_F9;
	}
	if (selectedItemS == 20) {
		smbind = VK_F10;
	}
	if (selectedItemS == 21) {
		smbind = VK_F11;
	}
	if (selectedItemS == 22) {
		smbind = VK_F12;
	}
	//m249
	if (selectedItemM2 == 0) {
		m2bind = false;
	}
	if (selectedItemM2 == 1) {
		m2bind = VK_NUMPAD0;
	}
	if (selectedItemM2 == 2) {
		m2bind = VK_NUMPAD1;
	}
	if (selectedItemM2 == 3) {
		m2bind = VK_NUMPAD2;
	}
	if (selectedItemM2 == 4) {
		m2bind = VK_NUMPAD3;
	}
	if (selectedItemM2 == 5) {
		m2bind = VK_NUMPAD4;
	}
	if (selectedItemM2 == 6) {
		m2bind = VK_NUMPAD5;
	}
	if (selectedItemM2 == 7) {
		m2bind = VK_NUMPAD6;
	}
	if (selectedItemM2 == 8) {
		m2bind = VK_NUMPAD7;
	}
	if (selectedItemM2 == 9) {
		m2bind = VK_NUMPAD8;
	}
	if (selectedItemM2 == 10) {
		m2bind = VK_NUMPAD9;
	}
	if (selectedItemM2 == 11) {
		m2bind = VK_F1;
	}
	if (selectedItemM2 == 12) {
		m2bind = VK_F2;
	}
	if (selectedItemM2 == 13) {
		m2bind = VK_F3;
	}
	if (selectedItemM2 == 14) {
		m2bind = VK_F4;
	}
	if (selectedItemM2 == 15) {
		m2bind = VK_F5;
	}
	if (selectedItemM2 == 16) {
		m2bind = VK_F6;
	}
	if (selectedItemM2 == 17) {
		m2bind = VK_F7;
	}
	if (selectedItemM2 == 18) {
		m2bind = VK_F8;
	}
	if (selectedItemM2 == 19) {
		m2bind = VK_F9;
	}
	if (selectedItemM2 == 20) {
		m2bind = VK_F10;
	}
	if (selectedItemM2 == 21) {
		m2bind = VK_F11;
	}
	if (selectedItemM2 == 22) {
		m2bind = VK_F12;
	}
	//PYTHON
	if (selectedItemPT == 0) {
		ptbind = false;
	}
	if (selectedItemPT == 1) {
		ptbind = VK_NUMPAD0;
	}
	if (selectedItemPT == 2) {
		ptbind = VK_NUMPAD1;
	}
	if (selectedItemPT == 3) {
		ptbind = VK_NUMPAD2;
	}
	if (selectedItemPT == 4) {
		ptbind = VK_NUMPAD3;
	}
	if (selectedItemPT == 5) {
		ptbind = VK_NUMPAD4;
	}
	if (selectedItemPT == 6) {
		ptbind = VK_NUMPAD5;
	}
	if (selectedItemPT == 7) {
		ptbind = VK_NUMPAD6;
	}
	if (selectedItemPT == 8) {
		ptbind = VK_NUMPAD7;
	}
	if (selectedItemPT == 9) {
		ptbind = VK_NUMPAD8;
	}
	if (selectedItemPT == 10) {
		ptbind = VK_NUMPAD9;
	}
	if (selectedItemPT == 11) {
		ptbind = VK_F1;
	}
	if (selectedItemPT == 12) {
		ptbind = VK_F2;
	}
	if (selectedItemPT == 13) {
		ptbind = VK_F3;
	}
	if (selectedItemPT == 14) {
		ptbind = VK_F4;
	}
	if (selectedItemPT == 15) {
		ptbind = VK_F5;
	}
	if (selectedItemPT == 16) {
		ptbind = VK_F6;
	}
	if (selectedItemPT == 17) {
		ptbind = VK_F7;
	}
	if (selectedItemPT == 18) {
		ptbind = VK_F8;
	}
	if (selectedItemPT == 19) {
		ptbind = VK_F9;
	}
	if (selectedItemPT == 20) {
		ptbind = VK_F10;
	}
	if (selectedItemPT == 21) {
		ptbind = VK_F11;
	}
	if (selectedItemPT == 22) {
		ptbind = VK_F12;
	}
	//m39
	if (selectedItemM39 == 0) {
		m39bind = false;
	}
	if (selectedItemM39 == 1) {
		m39bind = VK_NUMPAD0;
	}
	if (selectedItemM39 == 2) {
		m39bind = VK_NUMPAD1;
	}
	if (selectedItemM39 == 3) {
		m39bind = VK_NUMPAD2;
	}
	if (selectedItemM39 == 4) {
		m39bind = VK_NUMPAD3;
	}
	if (selectedItemM39 == 5) {
		m39bind = VK_NUMPAD4;
	}
	if (selectedItemM39 == 6) {
		m39bind = VK_NUMPAD5;
	}
	if (selectedItemM39 == 7) {
		m39bind = VK_NUMPAD6;
	}
	if (selectedItemM39 == 8) {
		m39bind = VK_NUMPAD7;
	}
	if (selectedItemM39 == 9) {
		m39bind = VK_NUMPAD8;
	}
	if (selectedItemM39 == 10) {
		m39bind = VK_NUMPAD9;
	}
	if (selectedItemM39 == 11) {
		m39bind = VK_F1;
	}
	if (selectedItemM39 == 12) {
		m39bind = VK_F2;
	}
	if (selectedItemM39 == 13) {
		m39bind = VK_F3;
	}
	if (selectedItemM39 == 14) {
		m39bind = VK_F4;
	}
	if (selectedItemM39 == 15) {
		m39bind = VK_F5;
	}
	if (selectedItemM39 == 16) {
		m39bind = VK_F6;
	}
	if (selectedItemM39 == 17) {
		m39bind = VK_F7;
	}
	if (selectedItemM39 == 18) {
		m39bind = VK_F8;
	}
	if (selectedItemM39 == 19) {
		m39bind = VK_F9;
	}
	if (selectedItemM39 == 20) {
		m39bind = VK_F10;
	}
	if (selectedItemM39 == 21) {
		m39bind = VK_F11;
	}
	if (selectedItemM39 == 22) {
		m39bind = VK_F12;
	}
	//8x
	if (selectedItem8x == 0) {
		xxbind = false;
	}
	if (selectedItem8x == 1) {
		xxbind = VK_NUMPAD0;
	}
	if (selectedItem8x == 2) {
		xxbind = VK_NUMPAD1;
	}
	if (selectedItem8x == 3) {
		xxbind = VK_NUMPAD2;
	}
	if (selectedItem8x == 4) {
		xxbind = VK_NUMPAD3;
	}
	if (selectedItem8x == 5) {
		xxbind = VK_NUMPAD4;
	}
	if (selectedItem8x == 6) {
		xxbind = VK_NUMPAD5;
	}
	if (selectedItem8x == 7) {
		xxbind = VK_NUMPAD6;
	}
	if (selectedItem8x == 8) {
		xxbind = VK_NUMPAD7;
	}
	if (selectedItem8x == 9) {
		xxbind = VK_NUMPAD8;
	}
	if (selectedItem8x == 10) {
		xxbind = VK_NUMPAD9;
	}
	if (selectedItem8x == 11) {
		xxbind = VK_F1;
	}
	if (selectedItem8x == 12) {
		xxbind = VK_F2;
	}
	if (selectedItem8x == 13) {
		xxbind = VK_F3;
	}
	if (selectedItem8x == 14) {
		xxbind = VK_F4;
	}
	if (selectedItem8x == 15) {
		xxbind = VK_F5;
	}
	if (selectedItem8x == 16) {
		xxbind = VK_F6;
	}
	if (selectedItem8x == 17) {
		xxbind = VK_F7;
	}
	if (selectedItem8x == 18) {
		xxbind = VK_F8;
	}
	if (selectedItem8x == 19) {
		xxbind = VK_F9;
	}
	if (selectedItem8x == 20) {
		xxbind = VK_F10;
	}
	if (selectedItem8x == 21) {
		xxbind = VK_F11;
	}
	if (selectedItem8x == 22) {
		xxbind = VK_F12;
	}
	//holo
	if (selectedItem16x == 0) {
		yybind = false;
	}
	if (selectedItem16x == 1) {
		yybind = VK_NUMPAD0;
	}
	if (selectedItem16x == 2) {
		yybind = VK_NUMPAD1;
	}
	if (selectedItem16x == 3) {
		yybind = VK_NUMPAD2;
	}
	if (selectedItem16x == 4) {
		yybind = VK_NUMPAD3;
	}
	if (selectedItem16x == 5) {
		yybind = VK_NUMPAD4;
	}
	if (selectedItem16x == 6) {
		yybind = VK_NUMPAD5;
	}
	if (selectedItem16x == 7) {
		yybind = VK_NUMPAD6;
	}
	if (selectedItem16x == 8) {
		yybind = VK_NUMPAD7;
	}
	if (selectedItem16x == 9) {
		yybind = VK_NUMPAD8;
	}
	if (selectedItem16x == 10) {
		yybind = VK_NUMPAD9;
	}
	if (selectedItem16x == 11) {
		yybind = VK_F1;
	}
	if (selectedItem16x == 12) {
		yybind = VK_F2;
	}
	if (selectedItem16x == 13) {
		yybind = VK_F3;
	}
	if (selectedItem16x == 14) {
		yybind = VK_F4;
	}
	if (selectedItem16x == 15) {
		yybind = VK_F5;
	}
	if (selectedItem16x == 16) {
		yybind = VK_F6;
	}
	if (selectedItem16x == 17) {
		yybind = VK_F7;
	}
	if (selectedItem16x == 18) {
		yybind = VK_F8;
	}
	if (selectedItem16x == 19) {
		yybind = VK_F9;
	}
	if (selectedItem16x == 20) {
		yybind = VK_F10;
	}
	if (selectedItem16x == 21) {
		yybind = VK_F11;
	}
	if (selectedItem16x == 22) {
		yybind = VK_F12;
	}
	//16x
	if (selectedItemHL == 0) {
		hhbind = false;
	}
	if (selectedItemHL == 1) {
		hhbind = VK_NUMPAD0;
	}
	if (selectedItemHL == 2) {
		hhbind = VK_NUMPAD1;
	}
	if (selectedItemHL == 3) {
		hhbind = VK_NUMPAD2;
	}
	if (selectedItemHL == 4) {
		hhbind = VK_NUMPAD3;
	}
	if (selectedItemHL == 5) {
		hhbind = VK_NUMPAD4;
	}
	if (selectedItemHL == 6) {
		hhbind = VK_NUMPAD5;
	}
	if (selectedItemHL == 7) {
		hhbind = VK_NUMPAD6;
	}
	if (selectedItemHL == 8) {
		hhbind = VK_NUMPAD7;
	}
	if (selectedItemHL == 9) {
		hhbind = VK_NUMPAD8;
	}
	if (selectedItemHL == 10) {
		hhbind = VK_NUMPAD9;
	}
	if (selectedItemHL == 11) {
		hhbind = VK_F1;
	}
	if (selectedItemHL == 12) {
		hhbind = VK_F2;
	}
	if (selectedItemHL == 13) {
		hhbind = VK_F3;
	}
	if (selectedItemHL == 14) {
		hhbind = VK_F4;
	}
	if (selectedItemHL == 15) {
		hhbind = VK_F5;
	}
	if (selectedItemHL == 16) {
		hhbind = VK_F6;
	}
	if (selectedItemHL == 17) {
		hhbind = VK_F7;
	}
	if (selectedItemHL == 18) {
		hhbind = VK_F8;
	}
	if (selectedItemHL == 19) {
		hhbind = VK_F9;
	}
	if (selectedItemHL == 20) {
		hhbind = VK_F10;
	}
	if (selectedItemHL == 21) {
		hhbind = VK_F11;
	}
	if (selectedItemHL == 22) {
		hhbind = VK_F12;
	}
	//simple
	if (selectedItemSS == 0) {
		ssbind = false;
	}
	if (selectedItemSS == 1) {
		ssbind = VK_NUMPAD0;
	}
	if (selectedItemSS == 2) {
		ssbind = VK_NUMPAD1;
	}
	if (selectedItemSS == 3) {
		ssbind = VK_NUMPAD2;
	}
	if (selectedItemSS == 4) {
		ssbind = VK_NUMPAD3;
	}
	if (selectedItemSS == 5) {
		ssbind = VK_NUMPAD4;
	}
	if (selectedItemSS == 6) {
		ssbind = VK_NUMPAD5;
	}
	if (selectedItemSS == 7) {
		ssbind = VK_NUMPAD6;
	}
	if (selectedItemSS == 8) {
		ssbind = VK_NUMPAD7;
	}
	if (selectedItemSS == 9) {
		ssbind = VK_NUMPAD8;
	}
	if (selectedItemSS == 10) {
		ssbind = VK_NUMPAD9;
	}
	if (selectedItemSS == 11) {
		ssbind = VK_F1;
	}
	if (selectedItemSS == 12) {
		ssbind = VK_F2;
	}
	if (selectedItemSS == 13) {
		ssbind = VK_F3;
	}
	if (selectedItemSS == 14) {
		ssbind = VK_F4;
	}
	if (selectedItemSS == 15) {
		ssbind = VK_F5;
	}
	if (selectedItemSS == 16) {
		ssbind = VK_F6;
	}
	if (selectedItemSS == 17) {
		ssbind = VK_F7;
	}
	if (selectedItemSS == 18) {
		ssbind = VK_F8;
	}
	if (selectedItemSS == 19) {
		ssbind = VK_F9;
	}
	if (selectedItemSS == 20) {
		ssbind = VK_F10;
	}
	if (selectedItemSS == 21) {
		ssbind = VK_F11;
	}
	if (selectedItemSS == 22) {
		ssbind = VK_F12;
	}
	//silencer
	if (selectedItemSL == 0) {
		slbind = false;
	}
	if (selectedItemSL == 1) {
		ssbind = VK_NUMPAD0;
	}
	if (selectedItemSL == 2) {
		ssbind = VK_NUMPAD1;
	}
	if (selectedItemSL == 3) {
		ssbind = VK_NUMPAD2;
	}
	if (selectedItemSL == 4) {
		ssbind = VK_NUMPAD3;
	}
	if (selectedItemSL == 5) {
		ssbind = VK_NUMPAD4;
	}
	if (selectedItemSL == 6) {
		ssbind = VK_NUMPAD5;
	}
	if (selectedItemSL == 7) {
		ssbind = VK_NUMPAD6;
	}
	if (selectedItemSL == 8) {
		ssbind = VK_NUMPAD7;
	}
	if (selectedItemSL == 9) {
		ssbind = VK_NUMPAD8;
	}
	if (selectedItemSL == 10) {
		ssbind = VK_NUMPAD9;
	}
	if (selectedItemSL == 11) {
		ssbind = VK_F1;
	}
	if (selectedItemSL == 12) {
		ssbind = VK_F2;
	}
	if (selectedItemSL == 13) {
		ssbind = VK_F3;
	}
	if (selectedItemSL == 14) {
		ssbind = VK_F4;
	}
	if (selectedItemSL == 15) {
		ssbind = VK_F5;
	}
	if (selectedItemSL == 16) {
		ssbind = VK_F6;
	}
	if (selectedItemSL == 17) {
		ssbind = VK_F7;
	}
	if (selectedItemSL == 18) {
		ssbind = VK_F8;
	}
	if (selectedItemSL == 19) {
		ssbind = VK_F9;
	}
	if (selectedItemSL == 20) {
		ssbind = VK_F10;
	}
	if (selectedItemSL == 21) {
		ssbind = VK_F11;
	}
	if (selectedItemSL == 22) {
		ssbind = VK_F12;
	}
	//rapid fire key
	if (selectedItemRP == 0) {
		rpbind = false;
	}
	if (selectedItemRP == 1) {
		rpbind = VK_CAPITAL;
	}
	if (selectedItemRP == 2) {
		rpbind = 0x46;
	}
	if (selectedItemRP == 3) {
		rpbind = 0x43;
	}
	if (selectedItemRP == 4) {
		rpbind = 0x58;
	}
	if (selectedItemRP == 5) {
		rpbind = 0x5A;
	}

	///
	if (selectedAUTOLOOT == 0) {
		rpbind = false;
	}
	if (selectedAUTOLOOT == 1) {
		rpbind = VK_CAPITAL;
	}
	if (selectedAUTOLOOT == 2) {
		rpbind = 0x46;
	}
	if (selectedAUTOLOOT == 3) {
		rpbind = 0x43;
	}
	if (selectedAUTOLOOT == 4) {
		rpbind = 0x58;
	}
	if (selectedAUTOLOOT == 5) {
		rpbind = 0x5A;
	}
	////
	//crosshair
	if (selectedItemCH == 0) {
		chbind = false;
	}
	if (selectedItemCH == 1) {
		chbind = VK_INSERT;
	}
	if (selectedItemCH == 2) {
		chbind = VK_DELETE;
	}
	if (selectedItemCH == 3) {
		chbind = VK_END;
	}
	if (selectedItemCH == 4) {
		chbind = VK_HOME;
	}
}
void resetkeys() {
	selectedItem = 0;
	selectedItemCH = 0;
	selectedItemL = 0;
	selectedItemM = 0;
	selectedItemC = 0;
	selectedItemT = 0;
	selectedItemS = 0;
	selectedItemM2 = 0;
	selectedItemPT = 0;
	selectedItemM39 = 0;
	selectedItem8x = 0;
	selectedItem16x = 0;
	selectedItemHL = 0;
	selectedItemSS = 0;
	selectedItemWP = 0;
	selectedItemSC = 0;
	selectedItemBR = 0;
	selectedItemSL = 0;
	selectedItemRP = 0;
	selectedAUTOLOOT = 0;
	akbind = false;//ak
	lrbind = false;//lr
	mpbind = false;//mp5
	csbind = false;//smg
	tmbind = false;//thompson
	smbind = false;//yar� oto
	m2bind = false;//m2
	ptbind = false;//python
	m39bind = false;//m39
	xxbind = false;//8x
	yybind = false;//16x
	hhbind = false;//holo
	ssbind = false;//simple
	slbind = false;//simple
	rpbind = false;//simple
	chbind = false;//simple
}