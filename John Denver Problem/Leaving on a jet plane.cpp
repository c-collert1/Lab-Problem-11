#include <iostream>
using namespace std;

const int ROWS = 13;
const int COLUMNS = 8;
int thisRow;

void displaySeatColumn(char seats[][ROWS], int column);

int main() {
	bool gettingInput = true;
	bool availableSeat = true;
	int columnCheck = 0;
	int rowCheck = 404;
	int seatCheck = 404;
	//Seating chart initialized
	char seatChart[COLUMNS][ROWS] = { {'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', ' '},
									  {'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', ' '},
									  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
									  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '1', '1', '1'},
									  {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3'},
									  {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
									  {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'},
									  {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'} };

	for (int i = 1; i < 9; i++) {
		thisRow = i;
		displaySeatColumn(seatChart, thisRow);
	}
}

void displaySeatColumn(char seats[][ROWS], int column) {
	for (int i = 0; i < ROWS; i++) {
		cout << seats[column - 1][i] << " ";
	}
	cout << endl;
}
