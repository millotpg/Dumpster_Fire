// Example program
#include <iostream>
#include <string>
#define _WIN32_WINNT 0x0500
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

void cls()
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO csbi;
	COORD topLeft = { 0, 0 };

	std::cout.flush();

	if (!GetConsoleScreenBufferInfo(hOut, &csbi)) {
		// TODO: Handle failure!
		abort();
	}
	DWORD length = csbi.dwSize.X * csbi.dwSize.Y;

	DWORD written;

	FillConsoleOutputCharacter(hOut, TEXT(' '), length, topLeft, &written);

	FillConsoleOutputAttribute(hOut, csbi.wAttributes, length, topLeft, &written);

	SetConsoleCursorPosition(hOut, topLeft);
}

int main()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 350, 350, TRUE);
	std::string fire1 = "             .\n            .M\n            MM:\n        .   YMM,\n        M   'MMM,    ,\n _______M.____MMM___.M\n \\      MM,   MMM  ,MM\n  \\     \"MM, MMMM, MM'\\\n   \\____,MM.MMMMM.MMM,_\\\n   |\\ MMMMMMMMMMMMMMMM  \\\n   | \\MMMMMMMMMMMMMMMMMM \\\n   |  \\___________________\\\n   |  |                   |\n   |  |                   |\n   \\  |     DUMPSTER      |\n    \\ |                   |\n     \\|___________________|\n";
	std::string fire2 = "               .\n              .M\n              MM:\n         .    YMM,\n         M    MMM,    ,\n _______ M.___MMM___.M\n \\       MM,  MMM  ,MM\n  \\      MM,  MMMM ,MM\\\n   \\___ ,MM.MMMMM.MMM,_\\\n   |\\ MMMMMMMMMMMMMMMM  \\\n   | \\MMMMMMMMMMMMMMMMMM \\\n   |  \\___________________\\\n   |  |                   |\n   |  |                   |\n   \\  |     DUMPSTER      |\n    \\ |                   |\n     \\|___________________|\n";
	std::string fire3 = "                  .\n                 .M\n                 MM:\n             .   YMM,\n             M,   MMM  ,\n ____________M'__MMM .M\n \\         .MM  MMM  ,MM\n  \\       ,MM\" MMMM, MM'\n   \\_____,MMMMMMMM.MMM,\\\n   |\\  MMMMMMMMMMMMMMMM \\\n   | \\MMMMMMMMMMMMMMMMMM \\\n   |  \\___________________\\\n   |  |                   |\n   |  |                   |\n   \\  |     DUMPSTER      |\n    \\ |                   |\n     \\|___________________|\n";
	std::cout << fire1 << std::flush;
	while (true)
	{
		cls();
		std::cout << fire1 << std::flush;
		Sleep(250);
		cls();
		std::cout << fire2 << std::flush;
		Sleep(250);
		cls();
		std::cout << fire3 << std::flush;
		Sleep(250);
		cls();
		std::cout << fire2 << std::flush;
		Sleep(250);
		cls();
	}
}