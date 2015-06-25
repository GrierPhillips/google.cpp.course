// shotangle.cpp: Grier Phillips
// Description: Given a cannon and ten shots user must hit a target
// by selecting the angle to shoot the cannon

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
#define kPi 3.14159
#define kV 200.00
#define kg 32.2
#define kBalls 10

void StartUp () {
	cout << "Welcome to Artillery." << endl;
	cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
	cout << "You have one cannon, which you can shoot at any angle." << endl;
	cout << "You only have 10 cannonballs for this target." << endl;
	cout << "Let's begin..." << '\n' << endl;
}

int Enemy() {
	int dist;
	srand(time(NULL));
	dist = rand() % 1000;
	cout << "The enemy is " << dist << " feet away!!!" << endl;
	return dist;
}

int ShotDistance(double angle) {
	double FlightTime;
	FlightTime = (2 * kV * sin (angle)) / kg;
	return round(kV * cos(angle) * FlightTime);
}

int Fire() {
	double angle; 
	int dist;
	cout << "What angle? ";
	while (!(cin >> angle) || angle > 89.9 || angle < 0){
		cout << "The cannon can't shoot that way!" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "What angle? ";
	}
	angle *= kPi/180;
	dist = ShotDistance(angle);
	return dist;
}

int CheckHits(int NumKilled) {
	int enemy, shots, hit, distance;
	
	shots = kBalls;
	enemy = Enemy();
	hit = 0;
	distance = 0;
	
	do{
		distance = Fire();
		cout << distance << endl;
		if (abs(distance - enemy) <=1){
			hit++;
			NumKilled++;
			cout << "Success! You hit the enemy!" << endl;
			cout << "It took " << kBalls - shots + 1 << " shots." << endl;
			cout << "You have killed " << NumKilled << " enemies." << endl;
		} else {
			if (distance > enemy) {
				shots--;
				cout << "You over shot by " << distance - enemy << endl;
			} else {
				shots--;
				cout << "You under shot by " << enemy - distance << endl;
			}
		}
	} while (shots > 0 && (!(hit)));
	if (shots == 0)
		cout << "You have run out of ammo. Prepare for destruction." << endl;
	return NumKilled;
}

int main() {
	StartUp();
	int killed=0;
	string again;
	do {
		killed = CheckHits(killed);
		if (killed = 0) {
			cout << "Would you like to play again?(y/n) ";
			cin >> again;
		} else {
			cout << "I see another one, are you ready? (y/n) ";
			cin >> again;
		}
	} while (again != "n");
	cout << "You killed " << killed << " enemies." << endl;
}
