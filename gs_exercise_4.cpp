// banner.cpp: Grier Phillips
// Description: Given a user input print a banner of large letters made up
// of smaller letters.

#include <iostream>
#include <string>
using namespace std;

void printA(){
	cout << "  A" << endl;
	cout << " A A" << endl;
	cout << "AAAAA" << endl;
	cout << "A   A" << endl;
	cout << "A   A" << endl;
	cout << endl;
}

void printB(){
	cout << "BBBB" << endl;
	cout << "B   B" << endl;
	cout << "BBBB" << endl;
	cout << "B   B" << endl;
	cout << "BBBB" << endl;
	cout << endl;
}

void printC(){
	cout << "  CCCC" << endl;
	cout << " C" << endl;
	cout << "C" << endl;
	cout << " C" << endl;
	cout << "  CCCC" << endl;
	cout << endl;
}

void printD(){
	cout << "DDDD" << endl;
	cout << "D   D " << endl;
	cout << "D    D" << endl;
	cout << "D   D" << endl;
	cout << "DDDD" << endl;
	cout << endl;
}

void printE(){
	cout << "EEEEE" << endl;
	cout << "E" << endl;
	cout << "EEE" << endl;
	cout << "E" << endl;
	cout << "EEEEE" << endl;
	cout << endl;
}

void printF(){
	cout << "FFFFF" << endl;
	cout << "F" << endl;
	cout << "FFF" << endl;
	cout << "F" << endl;
	cout << "F" << endl;
	cout << endl;
}

void printG(){
	cout << "  GGGG" << endl;
	cout << " G" << endl;
	cout << "G     GG" << endl;
	cout << " G    G" << endl;
	cout << "  GGGG" << endl;
	cout << endl;
}

void printH(){
	cout << "H   H" << endl;
	cout << "H   H" << endl;
	cout << "HHHHH" << endl;
	cout << "H   H" << endl;
	cout << "H   H" << endl;
	cout << endl;
}

void printI(){
	cout << "IIIII" << endl;
	cout << "  I" << endl;
	cout << "  I" << endl;
	cout << "  I" << endl;
	cout << "IIIII" << endl;
	cout << endl;
}

void printJ(){
	cout << "    J" << endl;
	cout << "    J" << endl;
	cout << "    J" << endl;
	cout << "J   J" << endl;
	cout << " JJJ" << endl;
	cout << endl;
}

void printK(){
	cout << "K   KK" << endl;
	cout << "K KK" << endl;
	cout << "KK" << endl;
	cout << "K KK" << endl;
	cout << "K   KK" << endl;
	cout << endl;
}

void printL(){
	cout << "L" << endl;
	cout << "L" << endl;
	cout << "L" << endl;
	cout << "L" << endl;
	cout << "LLLLL" << endl;
	cout << endl;
}

void printM(){
	cout << "M     M" << endl;
	cout << "MM   MM" << endl;
	cout << "M M M M" << endl;
	cout << "M  M  M" << endl;
	cout << "M     M" << endl;
	cout << endl;
}

void printN(){
	cout << "N   N" << endl;
	cout << "NN  N" << endl;
	cout << "N N N" << endl;
	cout << "N  NN" << endl;
	cout << "N   N" << endl;
	cout << endl;
}

void printO(){
	cout << "  OOOO" << endl;
  cout << " O    O" << endl;
  cout << "O      O" << endl;
  cout << " O    O" << endl;
  cout << "  OOOO" << endl;
  cout << endl;
}

void printP(){
	cout << "PPPPP" << endl;
  cout << "P    P" << endl;
  cout << "PPPPP" << endl;
  cout << "P" << endl;
  cout << "P" << endl;
  cout << endl;
}

void printQ(){
	cout << "  QQQQ" << endl;
  cout << " Q    Q" << endl;
  cout << "Q      Q" << endl;
  cout << " Q    Q" << endl;
  cout << "  QQQQ QQ" << endl;
  cout << endl;
}

void printR(){
	cout << "RRRRR" << endl;
  cout << "R    R" << endl;
  cout << "RRRRR" << endl;
  cout << "R    R" << endl;
  cout << "R     R" << endl;
  cout << endl;
}

void printS(){
	cout << " SSSSS" << endl;
  cout << "SS" << endl;
  cout << " SSSS" << endl;
  cout << "    SS" << endl;
  cout << "SSSSS" << endl;
  cout << endl;
}

void printT(){
	cout << "TTTTT" << endl;
  cout << "  T" << endl;
  cout << "  T" << endl;
  cout << "  T" << endl;
  cout << "  T" << endl;
  cout << endl;
}

void printU(){
	cout << "U    U" << endl;
  cout << "U    U" << endl;
  cout << "U    U" << endl;
  cout << "UU  UU" << endl;
  cout << " UUUU" << endl;
  cout << endl;
}

void printV(){
	cout << "V     V" << endl;
  cout << "V     V" << endl;
  cout << " V   V " << endl;
  cout << "  V V " << endl;
  cout << "   V" << endl;
  cout << endl;
}

void printW(){
	cout << "W     W" << endl;
  cout << "W  W  W" << endl;
  cout << "W W W W" << endl;
  cout << "WW   WW" << endl;
  cout << "W     W" << endl;
  cout << endl;
}

void printX(){
	cout << "X   X" << endl;
  cout << " X X" << endl;
  cout << "  X" << endl;
  cout << " X X" << endl;
  cout << "X   X" << endl;
  cout << endl;
}

void printY(){
	cout << "Y   Y" << endl;
  cout << " Y Y" << endl;
  cout << "  Y" << endl;
  cout << "  Y" << endl;
  cout << "  Y" << endl;
  cout << endl;
}

void printZ(){
	cout << "ZZZZZ" << endl;
  cout << "   Z" << endl;
  cout << "  Z" << endl;
  cout << " Z" << endl;
  cout << "ZZZZZ" << endl;
  cout << endl;
}

void Bannerize(string user_string){
	for (int i = 0; i < user_string.length(); i++){
		switch (user_string[i]) {
			case 'a':
				printA(); break;
			case 'b':
				printB(); break;
			case 'c':
				printC(); break;			
			case 'd':
				printD(); break;
			case 'e':
				printE(); break;
			case 'f':
				printF(); break;
			case 'g':
				printG(); break;
			case 'h':
				printH(); break;
			case 'i':
				printI(); break;
			case 'j':
				printJ(); break;
			case 'k':
				printK(); break;
			case 'l':
				printL(); break;
			case 'm':
				printM(); break;
			case 'n':
				printN(); break;
			case 'o':
				printO(); break;
			case 'p':
				printP(); break;
			case 'q':
				printQ(); break;
			case 'r':
				printR(); break;
			case 's':
				printS(); break;
			case 't':
				printT(); break;
			case 'u':
				printU(); break;
			case 'v':
				printV(); break;
			case 'w':
				printW(); break;
			case 'x':
				printX(); break;
			case 'y':
				printY(); break;
			case 'z':
				printZ(); break;
			default: break;
		}
	}
}

int main() {
	string user_string;
	cout << "What would you like to bannerize?" << endl;
	cin >> user_string;
	for ( int i = 0; i < user_string.length(); i++){
		user_string[i] = tolower(user_string[i]);
	}
	Bannerize(user_string);
}
