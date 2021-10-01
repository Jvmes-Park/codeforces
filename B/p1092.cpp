// B. Teams Forming

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int numStudents, skill;
	int sum = 0;
	int allSkills[1000];
	cin >> numStudents;
	for (int i = 0; i < numStudents; i++) {
		cin >> allSkills[i];
	}
	sort(allSkills, allSkills + numStudents);
	for (int i = 0; i < numStudents; i+=2) {
		sum += abs(allSkills[i + 1] - allSkills[i]);
	}
	cout << sum << endl;
}
