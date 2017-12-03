#pragma once

#include "CommonIncludes.h"
#include "BoardFunctions.h"

class MoveFunctions
{
public:
	static bool IsValidChoice(string);
	static int BoardToIndex(string);
	static bool adjacent(int, int, std::map<int, std::vector<int>>);
	static bool destinationCheck(int, int, char* board, std::map<int, std::vector<int>>);
	static void tokenCountUpdate(int&, int&, bool);
	static void attacking(int, int, char*, int&, int&, bool, std::map<int, std::vector<int>>);
	static void ProcessMoveRequest(bool, char*, int&, int&, std::map<int, std::vector<int>>);
};
