#include <iostream>
using namespace std;

int main() {
	int numParticipants, K, score, minPass;
	cin>>numParticipants>>K;
	for (int i = 0; i < K; i++) {	
		cin >> minPass;
		if (minPass == 0) {
			cout << i << endl;
			return 0;
		}
	}
	for (int i = K; i < numParticipants; i++) {
		cin >> score;
		if (score != minPass) {
			cout << i << endl;
			return 0;
		}
	}	
	cout << numParticipants << endl;
	return 0;
}
