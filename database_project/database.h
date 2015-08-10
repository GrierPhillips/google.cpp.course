// database.h, Grier Phillips
// Description: Class for a database of Composer records.
#include  <iostream>
#include  <algorithm>
#include  "Composer.h"
#include  <string>

// Our database holds 100 composers, and no more.
const int kMaxComposers = 100;
	
class Database {
 public:
  Database(): composers_(), next_slot_(0){}
	~Database(){}
  // Add a new composer using operations in the Composer class.
  // For convenience, we return a reference (pointer) to the new record.
  Composer& AddComposer(string in_first_name, string in_last_name, string in_genre, int in_yob, string in_fact){
		if (next_slot_ < 99){
			Composer &composer = composers_[next_slot_];
			composer.set_first_name(in_first_name);
			composer.set_last_name(in_last_name);
			composer.set_composer_genre(in_genre);
			composer.set_composer_yob(in_yob);
			composer.set_fact(in_fact);
			next_slot_++;
			return composer;	
		} else {
			cout << "You cannot add more than 100 composers." << endl;
		}			
	}												
  // Search for a composer based on last name. Return a reference to the
  // found record.
  Composer& GetComposer(string in_last_name){
		for(int i=0;i<next_slot_;i++){
			transform(in_last_name.begin(), in_last_name.end(), in_last_name.begin(), ::tolower);
			string name = composers_[i].get_last_name();
			transform(name.begin(), name.end(), name.begin(), ::tolower); 
			if (name == in_last_name){
				composers_[i].Display();
			}
		}
	}
	
	Composer& SetRanking(string in_last_name, int in_ranking){
		for(int i=0;i<next_slot_;i++){
			transform(in_last_name.begin(), in_last_name.end(), in_last_name.begin(), ::tolower);
			string name = composers_[i].get_last_name();
			transform(name.begin(), name.end(), name.begin(), ::tolower); 
			if (name == in_last_name){
				composers_[i].set_ranking(in_ranking);
			}
		}
	}
  // Display all composers in the database.
  void DisplayAll(){
		for(int i=0;i<next_slot_;i++){
				composers_[i].Display();
		}
	};
  // Sort database records by rank and then display all.
  Composer& GetRanking(){
		for(int i=0;i<next_slot_;i++){
			cout << composers_[i].get_ranking() << endl;
		}
	}
		
	static bool SortByRank(Composer const &a, Composer const &b) {
		return a.get_ranking() < b.get_ranking();
}
	
	void DisplayByRank(){
		sort(composers_, composers_ + next_slot_, &SortByRank);
		DisplayAll();
	};

 private:		
 // Store the individual records in an array.
  Composer composers_[kMaxComposers];
  // Track the next slot in the array to place a new record.
  int next_slot_;
};
