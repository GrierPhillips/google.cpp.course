// accelerate.cpp: Grier Phillips
// description: given speed of a vehicle and amount to accelerate
// return the final speed after passing speed by reference and amount
// by value

#include <iostream>
using namespace std;

void accelerate(int& speed, int amount){
	speed = speed + amount;
}

int main() {
	int speed, amount;
	
	cout << "What speed are you travelling? ";
	cin >> speed;
	cout << "How much will you accelerate? ";
	cin >> amount;
	accelerate(speed, amount);
	cout << "Final speed: " << speed << endl;
}
