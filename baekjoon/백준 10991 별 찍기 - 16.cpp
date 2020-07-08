#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	unsigned char k;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		for (int j = n - i; j > 0; j--)
			cout << " ";
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			if (k % 2 == 0) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}
}