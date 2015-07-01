// cricket.cpp: Grier Phillips
// Description: Calculate temperature based on cricket chirps

#include <iostream>
using namespace std;


int main () {
	int chirps, temperature;
	cout << "Number of chirps per minute: ";
	if(!(cin >> chirps)) 
		cout << "Please enter a number of chirps" << endl;
	temperature = (chirps + 40) / 4;
	cout << "The temperature is: " << temperature << " degrees.";
		
	return 0;
}
