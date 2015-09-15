#include <iostream>
#include <vector>

using namespace std;

// #x will get the name of the variable, cool huh?
#define debug(x) 	cout << (#x) << ": " << (x) << endl;
#define debugv(v) 	cout << (#v) << ": "; \
				  	for(int i = 0; i < (int)v.size(); i++) \
				  		cout << v[i] << " \n"[i == (int)v.size()-1];
int main() {
	int myInt = 10;
	vector<int> myVector = {1,2,3,4};
	debug(myInt);
	debugv(myVector);
	return 0;
}