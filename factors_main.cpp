#include <iostream>
#include <vector>

using namespace std;

int main() {

	int x {};
	vector<int> factors;
	cout << "Enter a whole number here: ";

	if(cin >> x){
		
		for(int i = 2; i < x/2 + 1; i++){
			if(x%i == 0){
				factors.push_back(i);
			}
		}

		if(factors.size() == 0){
			cout << x << " is prime." << endl;
		} else {
			cout << x << " is compound with " << factors.size() << " factors." << endl;
			cout << "The factors are: ";
			for (auto it = factors.begin(); it !=  factors.end(); it++){
				cout << *it << " ";
			}
			cout << endl;
		}

	} else {
		cout << "Invalid input. Program terminated." << endl;
	}
}
