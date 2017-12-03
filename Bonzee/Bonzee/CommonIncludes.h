#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

// -- Namespaces
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::transform;
using std::vector;

// -- Variable definitions
const int MAX_BOARD_SIZE = 45;
const int EMPTY_BOARD = 0;
const int ROW_LENGTH = 9;
const int COLUMN_LENGTH = 5;
const int MAX_PIECES_NUM = 22;
const int ASCII_LETTER_OFFSET = 48;
const int HEURISTIC_MULTIPLIER_100 = 100;
const int HEURISTIC_MULTIPLIER_50 = 50;
const int DEPTH = 4;