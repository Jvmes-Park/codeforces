//Kana and Dragon Quest Game

#include <iostream>
using namespace std;

int VA(int num) {
	int damage = 0;
	for (int i = 0; i < num; i++) {
		damage = (damage * 2) - 10;		
	}
	return damage;
}

int LS(int num) {
	int damage = 0;
	for (int i = 0; i < num; i++) {
		damage += 10;
	}
	return damage;
}

int main() {
	int testCases, initHitPoint, numVA, numLS;
	cin >> testCases;
	for (int i = 0; i < testCases; i++) {
		cin>>initHitPoint>>numVA>>numLS;
		int afterVA = VA(numVA);
		int afterLS = LS(numLS);
		int total = afterVA + afterLS;
		if (total >= initHitPoint) {
			cout << "YES"<<endl;
		}
		else {
			cout <<"NO"<<endl;
		}
	}
}
