#include <iostream>
using namespace std;

int main() {
	int num, time;
	string line;
	cin >> num >> time >> line;
	for (int i = 0; i < time; i++) {
		for (int k = 0; k < num; k++) {
			if (line[k] == 'G' && line[k-1] == 'B') {
				line[k-1] = 'G';
				line[k] = 'B';
				k++;
			}
		}
	}
	cout << line;
}
