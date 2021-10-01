#include <iostream>
#include <vector>
using namespace std;

int main() {
	int numOfWords;
	string temp;
	cin >> numOfWords;
	for (int i = 0; i < numOfWords; i++) {
		cin >> temp;
		if (temp.length() > 10) {
			cout << temp[0] << temp.length() - 2 << temp[temp.length() -1] <<endl;
		}
		else {
			cout << temp<< endl;
		}
	}
}
