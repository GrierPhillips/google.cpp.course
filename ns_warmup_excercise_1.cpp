// squareandsum.cpp: Grier Phillips
// description: find the number after 1225 that is both a 
// perfect square and the sum of a series 1 to n 

#include <iostream>
using namespace std;

long SeriesSum(int x){
	return (x *(x+1))/2;
}

int main(){
	long square;
	int num = 35;
	
	for(num = 36; ; num++) {	
		square = num * num;
		for(int i=0; i<square; i++){
			if (square == SeriesSum(i)) {
				cout << "The sum of 1 to " << i << " equals " << SeriesSum(i) << endl;
				cout << "The square of " << num << " equals " << square << endl;
				goto TheEnd;
			}
		}		
	} 
	TheEnd:;
}
