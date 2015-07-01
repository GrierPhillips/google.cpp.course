// animals.cpp: Grier Phillips
// What arrangement of 100 horses ($10), pigs ($3), and rabbits ($0.50) can 
// a farmer purchase for $100

#include <iostream>
using namespace std;

int main() {
//iterate through all combinations of horses pigs and rabbits equalling 100
// animals that will also equal $100

	for (int h = 1; h < 100; h++)
		for (int p = 1; p < 100; p++)
			for (int r = 1; r < 100; r++)
				if (h + p + r == 100)
					if (10 * h + 3 * p + .5 * r == 100)
						cout << "The answer is " << h << " horse(s), " << p << " pig(s), and " << r << " rabbit(s)." <<endl;

	//books on a shelf
	int counter, n, fact = 1;

     // Get Input Value
     cout<<"Enter a number of books to find the possible arrangements on a shelf:";
     cin>>n;

     
		 //for Loop Block
     for (int counter = 1; counter <= n; counter++)
     {
         fact = fact * counter;
     }

     cout<< "The number of arrangements for "<<n<<" books is "<<fact;
	
}
