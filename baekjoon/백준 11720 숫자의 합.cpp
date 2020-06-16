#include <iostream>
using namespace std;

int main() {
	int amt,sum = 0;
	
	cin >> amt;
	char *N = new char[amt];
	cin >> N;
	for (int i = 0; i < amt; i++) {
		sum +=(N[i] - '0');
	}
	cout << sum;
}