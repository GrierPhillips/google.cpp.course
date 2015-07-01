// cardtrick.cpp: Grier Phillips
// Description:  This is a number analogy to a famous card trick. 
// Ask the user to enter a three-digit number. Think of the number as 
// ABC (where A, B, C are the three digits of the number). Now, find 
// the remainders of the numbers formed by ABC, BCA, and CAB when 
// divided by 11. We will call these remainders X, Y, Z. Add them up as 
// X+Y, Y+Z, Z+X. If any of the sums are odd, increase or decrease it by 
// 11 (whichever operation results in a positive number less than 20; 
// note if the sum is 9, just report this and stop the process). Finally, 
// divide each of the sums in half. The resulting digits are A, B, C. 
// Write a program that implements this algorithm.

#include <iostream>
using namespace std;

int Num_Length(int n){
	int length = 0;
	while(n != 0){
		n /= 10;
		length++;
	}
	return length;
}

bool Is_Odd(int num){
	if (num % 2 == 1){
		return true;
	} else {
		return false;
	}
}


int main() {
	int a, b, c, num, x, y, z;
	int results [3], nums [3];
	cout << "Enter a three digit humber: "; 
	while(!(cin >> num) || Num_Length(num) != 3) {
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a three digit number: ";
	}	

	// break down a three digit number ABC into A, B, and C
	a = num / 100;
	c = num % 10;
	b = (num - c)/10 % 10;
	
	// rearrange and assign to nums array
	nums[0] = num;
	nums[1] = (b*100) + (c*10) + a;
	nums[2] = (c*100) + (a*10) + b;
	
	// find remainder of dividing by 11
	for (int i = 0; i < 3; i++){
		nums[i] = nums[i] % 11;
	}
	
	// add remainder pairs in results array
	results[0] = nums[0] + nums[1];
	results[1] = nums[1] + nums[2];
	results[2] = nums[0] + nums[2];
	
	// iterate through results 
	for (int i = 0; i < 3; i++){
		// if sum is odd and < 9 add 11 if > 9 subtract 11
		if (Is_Odd(results[i])){
			if (results[i] < 9){
				results[i] = (results[i] + 11)/2;
			} else if (results[i] > 9){
				results[i] = (results[i] - 11)/2;
			} else {
				results[i] = results[i];
			}
		} else {
			results[i] = results[i]/2;
		}
	}
	
	cout << "A: " << results[0] << endl;
	cout << "B: " << results[1] << endl;
	cout << "C: " << results[2] << endl;
}
