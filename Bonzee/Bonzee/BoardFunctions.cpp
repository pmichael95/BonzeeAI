#include "BoardFunctions.h"

void BoardFunctions::PrintBoard(char* board)
{
	cout << "\n\nBlack Cells Denoted By: [ ]\nWhite Cells Denoted By: ( )";
	cout << "\n\n ======================== B O N Z E E ======================= " << endl;
	cout << "\n       1     2     3     4     5     6     7     8     9";

	char startLetter = 'A';

	for (auto i = 0; i < MAX_BOARD_SIZE; i++) {

		// Prints the Line Letter
		if (i % ROW_LENGTH == 0) {
			cout << "\n\n  " << (char)(startLetter + (i / ROW_LENGTH)) << " ";
		}

		// Prints Content of the Line 
		if (i % 2 == 0)
			cout << " [ " << board[i] << " ]";  // Black Square 
		else
			cout << " ( " << board[i] << " )";  // White Square	
	}

	cout << "\n\n ============================================================\n" << endl;
}

void BoardFunctions::checkWin(int greenCounter, int redCounter, char* board)
{
	if (greenCounter <= 0) {
		BoardFunctions::PrintBoard(board);
		cout << "Game Over! Red Wins!";
	}

	else if (redCounter <= 0) {
		BoardFunctions::PrintBoard(board);
		cout << "Game Over! Green Wins!";
	}
}

bool BoardFunctions::isGameOver(int greenCounter, int redCounter)
{
	return (greenCounter <= EMPTY_BOARD || redCounter <= EMPTY_BOARD);
}

bool BoardFunctions::isValid(bool isPlayerOne, char color)
{
	if (isPlayerOne)
		return (color == 'G');
	else
		return (color == 'R');
}

bool BoardFunctions::changePlayer(bool isPlayerOne)
{
	return (!isPlayerOne);
}