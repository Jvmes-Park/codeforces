// A. Portal

#include <iostream>
#define MAX 1000
using namespace std;

int main() {
	int testCases, rows, columns;
	int changes = 0;
	cin >> testCases;
	for (int i = 0; i < testCases; i++) {
		cin >> rows >> columns;
		int portal[rows][columns];
		for (int rb = 0; rb < rows; rb++) {
			for (int cb = 0; cb < columns; cb++) {
				cin >> portal[rb][cb];
			}
		}
		for (int q = 0; q < rows; q++) {
			if (portal[q][1] == 0)
				changes++;
			if (portal[q][columns] == 0)
				changes++;
		}
		for (int w = 0; w < columns; w++) {
			if (portal[1][w] == 0) 
				changes++;
			if (portal[rows][w] == 0) 
				changes++;
		}
		for (int e = 0; e < rows; e++) {
			for (int r = 0; r < columns; r++) {
				if (portal[e][r] == 1)
					changes++;
			}
		}
	}
	cout << changes << endl;
}	

