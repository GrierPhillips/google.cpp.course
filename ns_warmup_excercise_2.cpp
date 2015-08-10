// booksales.cpp: Grier Phillips
// description: Given an input of books, the cost of each, current 
// inventory, prospective enrollment, and if the book is optional/required
// and has been used in the past. Determine how many books need to be 
// ordered and the total cost for each order.  

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

string to_string(double i, unsigned int &pos){
  stringstream ss;
  ss << i;
  string result(ss.str());
		
	pos=0;
	while (pos < result.length() && result[pos] != '.'){
		pos +=1;
	}
	return result;
}

void ClearError(){
	cin.clear();
	cin.ignore(10000, '\n');
	cout << "That is not a valid entry." << endl;
}
class Book {
	private:
	  int code_;
	  double price_, percent_sold_;
	  string is_req_, is_new_;
		bool required_, use_;
	public:
	  Book (int code, double price, int req, int age) : code_(code), price_(price), percent_sold_(0) {		
			required_ = (req == 1)? true:false;
			use_ = (age == 1)? true:false;
			is_req_ = req? "required":"optional";
			is_new_ = age? "new":"used";
			percent_sold_ = GetPercentSold();
		}	
		
		double GetPercentSold() {
			if(required_ && use_) {
				return 0.9;
			} else if(required_ && !use_){
				return 0.65;
			} else if(!required_ && use_){
				return 0.4;
			} else if (!required_ && !use_){
				return 0.2;
			}	
		}
		
		int GetCode(){return code_;}
		double GetPrice(){return price_;}
		string GetReq(){return is_req_;}
		string GetUse(){return is_new_;}
};

class Inventory {
	public:  
		int copies, enrollment, order;
		double book_cost, order_cost;
		
		Inventory():copies(0), enrollment(0), order(0), book_cost(0), order_cost(0) {}	
		
		void SetInv(int books, int students){
			copies = books;
			enrollment = students;
			order = 0;
			book_cost = 0;
		}
		
		void SetOrder(double sold){
			order = (enrollment*sold) - copies;
		}
		
		void SetCost(double price){
			book_cost = order * price;
		}
		
		void AddBook(){
			order_cost += book_cost;
		}		
};

void PrintOrder(Inventory &inventory, Book &book){
	cout << "***************************************************************************" << endl;
	cout << "Book: " << book.GetCode() << endl;
	cout << "Price: $" << fixed << setprecision(2) << book.GetPrice() << endl;
	cout << "Inventory: " << inventory.copies << endl;
	cout << "Enrollment: " << inventory.enrollment << endl << endl;
	cout << "This book is " << book.GetReq() << " and " << book.GetUse() << "." << endl;
	cout << "***************************************************************************" << endl;
	cout << "Copies to order: " << inventory.order << endl;
	cout << "Cost: $" << setprecision(2) << inventory.book_cost << endl;
	cout << "***************************************************************************" << endl;
}	

void PrintProfit(Inventory &inventory){
	cout << "***************************************************************************" << endl;
	cout << "Total for all orders: $" << setprecision(2) << inventory.order_cost << endl;
	cout << "Profit: $" << setprecision(2) << inventory.order_cost * 0.2 << endl;
	cout << "***************************************************************************" << endl;
}

int main() {
	//GetInput();
	int code(0), another(0), books(0), enrollment(0), required, use;
	double price;
	unsigned int pos(0);
	
	Inventory inventory;
	do{
		cout << "Please enter the four digit book code: ";
		cin >> code;
		string str_code = to_string(code, pos);
		while (!code || str_code.length() != 4){
			ClearError();
			cout << "Please enter the four digit book code: ";
			cin >> code;
			str_code = to_string(code, pos);
		}
		
		cout << "Please enter the single copy price: ";
		cin >> price;
		string str_price = to_string(price, pos);
			while (!price || pos < 1){
			ClearError();
			cout << "Please enter the single copy price: ";
			cin >> price;
		}
		cout << pos << endl;
		
		cout << "Please enter the number of copies on hand: ";
		cin >> books;
		while (!books){
			ClearError();
			cout << "Please enter the number of copies on hand: ";
			cin >> books;
		}
		
		cout << "Please enter the prospective enrollment: ";
		cin >> enrollment;
		while (!enrollment){
			ClearError();
			cout << "Please enter the prospective enrollment: ";
			cin >> enrollment;
		}
		
		cout << "Is this book required? 1 for required, 0 for optional: ";
		cin >> required;
		if (required == 0){	
		} else{
			while (!required || required > 1 || required < 0){
				ClearError();
				cout << "Please enter the 1 for required and 0 for optional: ";
				cin >> required;
			}
		}
		
		cout << "Is this the first time the book has been used? 1 for yes, 0 for no: ";
		cin >> use;
		if (use == 0){
		}else {
		while (!use || use < 0 || use > 1){
			ClearError();
			cout << "Please enter 1 for new and 0 for used: ";
			cin >> use;
			}
		}
		
		Book book(code, price, required, use);
		inventory.SetInv(books, enrollment);
		inventory.SetOrder(book.GetPercentSold());
		inventory.SetCost(book.GetPrice());
		
		PrintOrder(inventory, book);
		
		cout << "Enter 1 to add another book, 0 to stop: ";
		cin >> another;
		if (another == 0){	
		} else {
			while (!another || another < 0 || another > 1){
				ClearError();
				cout << "Please enter 1 to add another book and 0 to stop: ";
				cin >> another;
			}
		}
		
		inventory.AddBook();
		
	}while(another == 1);
	
	PrintProfit(inventory);	
} 
