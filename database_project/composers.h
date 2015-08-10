// composer.h, Grier Phillips
// Description: The class for a Composer record.
// The default ranking is 10 which is the lowest possible.
#include <iostream>
using namespace std;

const int kDefaultRanking = 10;

class Composer {
	public:
		// Constructor
 		Composer(): first_name_(), last_name_(), composer_yob_(), composer_genre_(), ranking_(kDefaultRanking), fact_(){}
  	~Composer(){}
  

  	// Accessors and Mutators
  	void set_first_name(string in_first_name){
			first_name_ = in_first_name;
		}
  	void set_last_name(string in_last_name){
			last_name_ = in_last_name;
		}
		string get_last_name(){
			return last_name_;
		}
  	void set_composer_yob(int in_composer_yob){
			composer_yob_ = in_composer_yob;
		}
  	void set_composer_genre(string in_composer_genre){
			composer_genre_ = in_composer_genre;
		}	
  	void set_ranking(int in_ranking){
			ranking_ = in_ranking;
		}
		int get_ranking()const{
			return ranking_;
		}
  	void set_fact(string in_fact){
			fact_ = in_fact;
		}

  	// This method displays all the attributes of a composer.
  	void Display(){
			cout << "First Name: " << first_name_ << endl;
			cout << "Last Name: " << last_name_ << endl;
			cout << "Year of Birth: " << composer_yob_ << endl;
			cout << "Genre: " << composer_genre_ << endl;
			cout << "Fact: " << fact_ << endl;
			cout << "Ranking: " << ranking_ << endl << endl;
		}

 private:
  string first_name_;
  string last_name_;
  int composer_yob_; // year of birth
  string composer_genre_; // baroque, classical, romantic, etc.
  string fact_;
	int ranking_;
  
};
