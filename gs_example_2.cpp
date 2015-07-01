// get_input.cpp: Grier Phillips
// Description: Illustrate use of cin to get input.

#include <iostream>
using namespace std;

int main() {
	int input_var = 0;
	//Enter a do while loop and stay there until either,
	//a non-numeric is entered, or -1 is entered.  Note that
	//cin will accept any integer
	do {
		cout << "Enter a number (-1 = quit): ";
		//The following line accepts input from the keyboard into
		//variable input_var.
		//cin returns false if an input operation fails, that is if
		//something other than and int (the type off input_var) is entered.
		if(!(cin >> input_var)) {
			cout << "You entered a non-numeric. Try again." << endl;
			cin.clear();
			//clear the error
			cin.ignore();
			//ignore the cin

		}
		if (input_var != -1) {
			cout << "You entered " << input_var << endl;
		}
	} while (input_var != -1);
	cout << "All done." << endl;
	return 0;
}
