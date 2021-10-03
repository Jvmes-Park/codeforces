#include <iostream>
using namespace std;

int main() {
	int caseNum, x, y, z;
	int xsum = 0, ysum = 0, zsum = 0;
	cin >> caseNum;
	for (int i = 0; i < caseNum; i++) {
		cin>>x>>y>>z;
		xsum+=x;
		ysum+=y;
		zsum+=z;
	}
	if (xsum == 0 && ysum == 0 && zsum == 0)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
