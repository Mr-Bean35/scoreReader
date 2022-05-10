/*
PROGRAM NAME: ScoreReader.cpp
DATE: 03-05-22
PROGRAMMER NAME: Benjamin Hensley Jr.
*/

#include <iostream>
using namespace std;

int main() {
	if (true) {
		cout << "This is always displayed!" << endl;
	}
	if (false) {
		cout << "This is never displayed!" << endl;
		
	}

	double score = 33.75;

	if (score >= 250 and score > 1000) {
		cout << "At least you didn't score less than 250." << endl;
	} else if (score >= 1000) {
		cout << "Congrats you did well!" << endl;
	} else {
		cout << "At least you tried your best." << endl;
	}
	cout << score << endl;
	return 0;
}