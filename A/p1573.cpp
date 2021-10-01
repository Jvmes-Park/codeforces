#include <iostream>
#define MAX 100
using namespace std;

int main() {
	int testCases, numDigits, digits;
	cin >> testCases;
	int digitArr[MAX];
	int changes = 0;
	int value;
	for (int i = 0; i < testCases; i++) {
		cin >> numDigits;
		for (int i = numDigits; i > 0; i--) {
			cin >> value;
			if (i == numDigits) {
				changes += value;
			}
			else {
				changes += value + 1;
			}
		}
//		for (int i = 0; i < numDigits; i++) {
//			cin >> digitArr[i];
//		}
//		if (digitArr[numDigits - 1] > 0) {
//			changes += digitArr[numDigits - 1];
//			digitArr[numDigits - 1] = 0;
//		}
//		for (int i = numDigits; i > 0; i--) {
//			if (digitArr[i] > 0) {
//				changes += digitArr[i] + 1;
//				digitArr[i] = 0;
//			}			
//		}
	}
	cout << changes << endl;	
}
