#include <iostream>
using namespace std;

int main() {
	int value, flagRow, flagColumn;
	int midRow = 3; int midColumn = 3;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			cin >> value;
			if (value == 1) {
				flagRow = i + 1;
				flagColumn = k + 1;
			}
		}
	}
	int rowDiff = abs(flagRow - midRow);
	int colDiff = abs(flagColumn - midColumn);
	int changes = rowDiff + colDiff;
	cout << changes << endl;
}
