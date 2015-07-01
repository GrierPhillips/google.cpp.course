// stopwatch.cpp: Grier Phillips
// Description: given an input of seconds output hours, minutes, and seconds

#include <iostream>
using namespace std;

int main() {
	int tot_seconds, hours, minutes, seconds;
	
	// create do/while loop to handle input other than positive numbers
	do {
		cout << "Number of seconds: ";
		if (!(cin >> tot_seconds)) {
			cout << "Please enter a number of seconds." << endl;
			cin.clear();
			cin.ignore();	
		}
	}	while (!(tot_seconds > 0));
	
	// calculate each time increment
	hours = tot_seconds / 3600;
	minutes = tot_seconds % 3600 / 60;
	seconds = tot_seconds % 60;
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
	return 0;
}	
