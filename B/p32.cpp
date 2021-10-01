#include <iostream>
using namespace std;

int main() {
	string coded;
	cin >> coded;
	int size = coded.length();
	int arr[200];
	for (int i = 0; i < coded.length(); i++) {
		if (coded[i] == '-' && coded[i + 1] == '.') {
			arr[i] = 1;	
			i++;
		}
		if (coded[i] == '-' && coded[i + 1] == '-') {
			arr[i] = 2;
			i++;
		}
		if (coded[i] == '.' && (coded[i + 1] == '-' || coded[i + 1] == '.')) {
			arr[i] = 0;
		}
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}
