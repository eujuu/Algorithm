#include <iostream>
using namespace std;

int main() {
	int per[5], sum = 0;
	for (int i = 0; i < 5; i++)
		cin >> per[i];
	for (int i = 0; i < 5; i++) {
		if (per[i] < 40)
			sum += 40;
		else
			sum += per[i];
	}
	cout << sum / 5;
}