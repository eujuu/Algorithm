#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int k = n - i; k > 0; k--)
			cout << " ";
		for (int s = 0; s < i; s++)
			cout << "*";
		cout << "\n";
		
	}
	for (int i = 1; i < n; i++) {
		for (int s = 0; s < i; s++)
			cout << " ";
		for (int k = n - i; k > 0; k--)
			cout << "*";
		cout << "\n";
	}
}