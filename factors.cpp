#include <iostream>
#include <vector>

using namespace std;

int factors(int x) {

	//int x {}; // do I need to re-declare?
	vector<int> factors;
		
	for(int i = 2; i < x/2 + 1; i++){
		if(x%i == 0){
			factors.push_back(i);
		}
	}

	if(factors.size() == 0){
		cout << x << " is prime." << endl;
	} else {
		cout << x << " is compound with " << factors.size() << " factors.";
		cout << "The factors are: ";
		for (auto it = factors.begin(); it !=  factors.end(); it++){
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}
