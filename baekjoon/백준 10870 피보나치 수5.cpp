#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int fibonacci(int n) {
	if (n == 0)return 0;
	else if (n == 1) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << fibonacci(n);
}