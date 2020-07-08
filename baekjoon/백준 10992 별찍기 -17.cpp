#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++)
		cout << " ";
	cout << "*" << "\n";
	if (n > 1) {
		for (int j = 2; j < n; j++) {
			for (int m = n - j; m > 0; m--)
				cout << " ";
			cout << "*";
			for (int s = 1; s <= 2 * j - 3; s++)
				cout << " ";
			cout << "*" << "\n";
		}
		for (int k = 0; k < 2 * n - 1; k++)
			cout << "*";
	}
	
}