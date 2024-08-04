#include <iostream>
#include <limits>
using namespace std;

int main(){
	cout << "Enter your first number: ";
	bool valid_a = false;
	bool valid_b = false;
	
	int a{};
	int b{};


	while(!valid_a){
		if(cin >> a){
			cout << "Enter your second number: ";
			valid_a = true;
		} 
		else {
			cout << "Invalid input. Try again: ";
			cin.clear(); //clear error state
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore invalid input	
		}
	}

	while(!valid_b){	
		if(cin >> b){
			valid_b = true;
		} 
		else {
			cout << "Invalid input. Try again: ";
			cin.clear(); //clear error state	     
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore invalid input	
		}
	
	}
	
	cout << "Your numbers are " << a << " and " << b << "." << endl;

}
