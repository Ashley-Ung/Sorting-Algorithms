//**********************************************************************
// File:			main.cpp
// Author:			Ashley Ung
// Date:			10/11/2022
// Purpose:			A program that determines whether the integer values
//					in an external file are in increasing order or not.
//					There is a sentinel value of -999.
//**********************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main () {
	const string INPUT_FILE = "numbers.txt";
	const int SENTINEL = -999;
	const int SORTED = 1;
	const int NOT_SORTED = 0;

	int currentNumber = 0; 
	int previousNumber;
	int sorted = SORTED;

	ifstream inputFile;
	inputFile.open (INPUT_FILE);

	if (inputFile.fail ()) {
		cout << "Error opening input file." << endl;
		exit (EXIT_FAILURE);
	}

	cout << "*** Number Cruncher ***" << endl << endl;

	while (currentNumber != SENTINEL) {
		previousNumber = currentNumber;
		inputFile >> currentNumber;
		if (previousNumber > currentNumber && currentNumber != SENTINEL) {
			sorted = NOT_SORTED;
		}
	}

	if (sorted == SORTED) {
		cout << "SORTED" << endl;
	}
	else {
		cout << "NOT SORTED" << endl;
	}

	inputFile.close ();
	return EXIT_SUCCESS;
}
