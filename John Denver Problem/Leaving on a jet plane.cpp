#include <iostream>
using namespace std;

const int ROWS = 13;
const int COLUMNS = 8;
int thisRow = -1;
char thisSeat = ' ';

int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
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


	do {
		cout << endl << "What seat would you like? (ex. 12A) Press Q to Quit: ";
		cin >> thisRow >> thisSeat;
		system("cls");
		if (!cin.fail()) {
			if (findRowIndex(thisRow) != 404) {
				columnCheck = findRowIndex(thisRow);
			}
			if (findSeatIndex(thisSeat) != 404) {
				if (findRowIndex(thisRow) == 404) {
					rowCheck = 404;
				}
				else {
					rowCheck = findSeatIndex(thisSeat);
				}
			}
		}
		cout << "Row: " << rowCheck << endl;
		cout << "Column: " << columnCheck << endl;

	} while (!cin.fail());
}

void displaySeatColumn(char seats[][ROWS], int column) {
	for (int i = 0; i < ROWS; i++) {
		cout << seats[column - 1][i] << " ";
	}
	cout << endl;
}

int findRowIndex(int thisRow) {
	int seatSelected = findSeatIndex(thisSeat);
	if (seatSelected == 0 || seatSelected == 1) {
		if (thisRow > -1 && thisRow < 13) {
			return (thisRow - 1);
		}
	}

	if (seatSelected == 6 || seatSelected == 7) {
		if (thisRow > -1 && thisRow < 14) {
			return (thisRow - 1);
		}
	}
	return 404;
}
int findSeatIndex(char thisSeat) {

	if (toupper(thisSeat) == 'D') {
		return 0;
	}
	else if (toupper(thisSeat) == 'C') {
		return 1;
	}
	else if (toupper(thisSeat) == 'B') {
		return 6;
	}
	else if (toupper(thisSeat) == 'A') {
		return 7;
	}
	else {
		return 404;
	}
}
