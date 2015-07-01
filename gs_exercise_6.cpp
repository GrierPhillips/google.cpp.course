// expirationdate.cpp: Grier Phillips
// Description: Given a four letter code determine the expiry date
// assuming that the code follows the following rules.
// [index 0]: A-L corresponds to months Jan - Dec
// [index 1:2]: Q-R corresponds to days 0-9
// [index 3]: A-Z corresponds to years 1-26 added to 1995

#include <iostream>
using namespace std;

int get_month(char code){
	int month = code - 64;
	return month;
}

int get_day(char code){
	int day = code - 81;
	return day;	
}

int get_year(char code){
	int year = code - 64 + 1995;
	return year;
}

int main() {
	string code;
	cout << "Enter an expiration code: ";
	
	do{
		if (!(cin >> code) || code.length() != 4) {
			cout << "Please enter a valid 4 letter expiration code." << endl;
			cin.clear();
			cin.ignore();
			cout << "Expiration code: ";
		}
	} while (code.length() != 4);
	for (int i = 0; i < code.length(); i++){
		code[i] = toupper(code[i]);
	}
	
	cout << "Expiration date (MM/DD/YYYY): " << endl;
	cout << get_month(code[0]) << "/" << get_day(code[1]) << get_day(code[2]) << "/" << get_year(code[3]) << endl;
}
