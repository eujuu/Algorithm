#include <iostream>
#include <cmath>  
using namespace std;

int main() {
	int a, b, c, res, arr[10] = { 0, };
	cin >> a >> b >> c;
	res = a * b * c;
	while (true) {
		arr[res % 10]++;
		res /= 10;
		if (res == 0)
			break;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << arr[i] << "\n";
	return 0;
}