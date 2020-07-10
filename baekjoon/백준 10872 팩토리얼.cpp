#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int factorial(int n) {
	if (n == 1)return 1;
	return n * factorial(n - 1);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, mul = 1;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
		mul *= i;
	cout << mul;
}