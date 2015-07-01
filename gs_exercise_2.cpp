// grades.cpp: Grier Phillips
// Description: calculate final averages based on grades on each section

#include <iostream>
using namespace std;

//define constants 
#define kAWeight 0.4
#define kMidWeight 0.15
#define kFinWeight 0.35
#define kPartWeight 0.1

int main() {
	int a1, a2, a3, a4, midterm, fin, part;
	double grade;
	// ask user for input for each section
	cout << "Enter the score for the first assignment: ";
	cin >> a1;
	cout << "Enter the score for the second assignment: ";
	cin >> a2;
	cout << "Enter the score for the third assignment: ";
	cin >> a3;
	cout << "Enter the score for the fourth assignment: ";
	cin >> a4;
	cout << "Enter the score for the midterm: ";
	cin >> midterm;
	cout << "Enter the score for the final: ";
	cin >> fin;
	cout << "Enter the score for participation: ";
	cin >> part;
	
	// calculate the grade for assignments
	float avg_a = (a1 + a2 + a3+ a4)/4;
	
	//calculate the final grade
	grade = avg_a * kAWeight + midterm * kMidWeight + fin * kFinWeight + part * kPartWeight;
	
	cout << "The final grade is: " << grade << endl;
	return 0;
}
