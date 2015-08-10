//composerdatabase.cpp: Grier Phillips
//Description: interface for compiling a database of composers, some info about them, and ranking them on a 1 - 10 scale

#include "database.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

void DisplayMenu(){
	cout << endl << "Composer Database" << endl;
	cout << "---------------------------------------" << endl;
	cout << "1) Add a new composer" << endl;
	cout << "2) Retrieve a composer's data" << endl;
	cout << "3) Promote/demote a composer's rank" << endl;
	cout << "4) List all composers" << endl;
	cout << "5) List all composers by rank" << endl;
	cout << "0) Quit" << endl << endl;
}

int main(){
	int in_yob, ranking;
	string in_first_name, in_last_name, in_genre, in_fact, last_name, in_composer;
	char selection, choice;

	Database myDB;
	
	do {
		DisplayMenu();
		cin >> selection;
		cout << endl;
		while (!cin || selection < 48 || selection > 53){
			cin.clear();
			cout << "Please make a valid selection" << endl;
			DisplayMenu();
			cin >> selection;
		}
		switch (selection) {
			case 49 : {
				cout << "First Name: ";
				cin >> in_first_name;
				cout << "Last Name: ";
				cin >> in_last_name;
				cout << "Genre: ";
				cin >> in_genre;
				cout << "Year of Birth: ";
				cin >> in_yob;
				while (!cin || in_yob < 1){
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Enter a positive integer for year of birth: ";
					cin >> in_yob;
				}
				cout << "Fact: ";
				cin >> in_fact;
				last_name = in_last_name;
				transform(last_name.begin(), last_name.end(), last_name.begin(), ::tolower);
				Composer& last_name = myDB.AddComposer(in_first_name, in_last_name,
															in_genre, in_yob, in_fact);
				cin.clear();
			}	break;
			case 50 : {
				cout << "Enter composers last name: ";
				cin >> in_last_name;
				cout << endl;
				myDB.GetComposer(in_last_name);
			}	break;
			case 51 : {
				do{
					cout << "Which composer would you like to promote/demote? " << endl;
					cin >> in_composer;
					cout << "Set ranking: ";
					cin >> ranking;
					while(ranking > 10 || ranking < 1){
						cin.clear();
						cout << "Please enter a ranking between 1 and 10" << endl;
						cout << "Set ranking: ";
						cin >> ranking;
					}
					cout << endl;
					myDB.SetRanking(in_composer, ranking);
					myDB.GetComposer(in_composer);
					cout << "Would you like to change another ranking? (y/n)";
					cin >> choice;
				}while (::tolower(choice) == 121);
				cin.clear();
			}	break;
			case 52 : {
				myDB.DisplayAll();
			}	break;
			case 53 : {
				myDB.DisplayByRank();
			} break;
			case 48 :
				break;
			default :
				cout << "Please make a valid selection" << endl;
		}
	} while (selection != 48);	
}
