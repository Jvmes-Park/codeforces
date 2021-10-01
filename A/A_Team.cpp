#include <iostream>
using namespace std;

int main() {
	int numProblems, P, V, T;
	int willDo = 0;
	cin >> numProblems;
	for (int i = 0; i < numProblems; i++) {
		cin >> P >> V >> T;
		int confidence = P + V + T;
		if (confidence >= 2) {
			willDo++;
		}	
	}
	cout << willDo << endl;
}	
