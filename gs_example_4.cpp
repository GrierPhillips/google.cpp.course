// euclideanalgorithm.cpp: Grier Phillips
// given two inputs return the greatest common denominator using the Euclidean Algorithm

#include <iostream>
using namespace std;

int gcd(int a, int b) {
	
	if(a < b) {
		a += b;
		b = a - b;
		a -= b;
	}
	
	if (b == 0) return a;
	
	while (a % b != 0) {
		a += b;
		b = a - b;
		a -= b;
		b %= a;
	}
	return b;
}

int main() {
	int x, y;
	cout << "Enter two integers to find the Greatest Common Denominator: ";
	if (!(cin >> x >> y)) {
		cout << "Please enter numbers only" << endl;
	} else {
		cout << "GCD(" << x << ", " << y << ") = " << gcd(x,y) << endl;
	}
	return 0;
}
