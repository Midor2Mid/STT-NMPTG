#include <windows.h>
#include "SceneMain.h"
#include <Windows.h>
#include <stdio.h>
int (WINAPIV * __vsnprintf)(char *, size_t, const char*, va_list) = _vsnprintf;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SceneMain *game = new SceneMain(nCmdShow);
	game->InitGame();
	game->GameRun();
	game->GameEnd();
	return 0;
}