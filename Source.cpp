#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	string dummy;
	getline(cin, dummy);
	for (int i = 0; i < cases; i++) {
		string input;
		getline(cin, input);
		stringstream ss(input);
		string word;
		while (ss >> word) {
			cout << word << endl;
		}
	}
	

}