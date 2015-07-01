// weeklysales.cpp: Grier Phillips
// Description: determine compensation method that pays the best

#include <iostream>
using namespace std;

//constants
#define kPricePerUnit 225	// average price per pair of shoes 
#define kWeeklyWage 600	// weekly wage for Method 1
#define kSalary 7.0	// hourly wage for Method 2
#define kHoursPerWeek 40	// hours worked Method 2
#define kCommission1 0.10	// commission Method 2
#define kCommission2 0.20	// commission Method 3
#define kBonusPerUnit 20	// bonus Method 3

int GetInput() {
	int units;
	cout << "How many sales will you make a week?";
	if(!(cin >> units)) {
		cout << "Please enter a number of shoes sold." << endl;
		return 0;
	} else {
		return units;
	}
}

//method 1 $600 per week flat rate
void CalcMethod1() {
	cout << "Weekly Wage for Method 1: $" << kWeeklyWage << endl; 
}

//method 2 $7/hr and 10% commission
void CalcMethod2(int Sales) {
	double PerHour, TotalPay, Commission;
	
	PerHour = kHoursPerWeek * kSalary;
	Commission = kCommission1 * Sales * kPricePerUnit;
	TotalPay = PerHour + Commission;
	cout << "Weekly Wage for Method 2: $" << TotalPay << " on " << Sales << " pairs of shoes sold." << endl;
}

//method 3 20% commission and $20 bonus per unit sold
void CalcMethod3(int Sales) {
	double Commission, TotalPay, UnitBonus;
	
	UnitBonus = Sales * kBonusPerUnit;
	Commission = Sales * kPricePerUnit * kCommission2;
	TotalPay = UnitBonus + Commission;
	cout << "Weekly Wage for Method 3: $" << TotalPay << " on " << Sales << " pairs of shoes sold." << endl;
}	
	
int main() {
	int WeeklySales;
	
	WeeklySales = GetInput();
	if (WeeklySales == 0) 
		return 0;
	CalcMethod1();
	CalcMethod2(WeeklySales);
	CalcMethod3(WeeklySales);
}
