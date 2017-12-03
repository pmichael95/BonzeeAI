#pragma once

#include "CommonIncludes.h"

class BoardFunctions
{
public:
	static void PrintBoard(char*);
	static void checkWin(int, int, char*);
	static bool isGameOver(int, int);
	static bool isValid(bool, char);
	static bool changePlayer(bool);
};
