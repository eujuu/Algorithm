#include <iostream>
using namespace std;

int main() {
	int  Testcase, rep, k = 0;
	char arr[20];
	cin >> Testcase;
	for (int i = 0; i < Testcase; i++) {
		cin >> rep >> arr;
		k = 0;
		while (arr[k] != '\0') {
			for (int m = 0; m < rep; m++)
				cout << arr[k];
			k++;
		}
		arr[0] = '\0';
		cout << "\n";
	}

}