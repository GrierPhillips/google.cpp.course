// magicnumber.cpp: Grier Phillips
// Description: given a three digit number; reverse it, subtract the reversed
// number from the original number, reverse the result, and add that to the unreversed form.

#include <iostream>
using namespace std;

int Reverse(int num) {
	int rev = 0;
	while (num != 0) {
		 rev *= 10;
		 rev += num % 10;
		 num /= 10;
	}
	return rev;
}

int Num_Length(int num) {
	int length = 0;
	while (num != 0) {
		num /= 10;
		length++;
	}
	return length;
}

int main () {
	int num, diff, sum;
	
	cout << "Enter a three digit number with first digit greater than the last. " << endl;
	cout << "Input: ";
	
	// do/while loop to identify proper input constraints (3 digit, first greater
  // than last) and clear errors if necessary.
	do {	
		if (!(cin >> num) || num / 100 < num % 10 || Num_Length(num) != 3){
			cout << "Please enter a three digit number whose first digit is greater than its last: " << endl;
			cin.clear();
			cin.ignore();
			cout << "Input: ";
		}
	} while (Num_Length(num) != 3, num / 100 < num % 10);
	
	diff = num - rev_num;
	sum = rev_diff + diff;
	
	cout << "Input Number: " << num << endl;
	cout << "Reverse: " << Reverse(num) << endl;
	cout << "Difference: " << diff << endl;
	cout << "Reverse: " << Reverse(diff) << endl;
	cout << "Sum: " << sum << endl;
}
