#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;
int arr[10001] = { 0, };
int main() {
	int n, a, max = 0;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[a]++;
		if (a > max)max = a;
	}
	for (int i = 0; i <= max; i++)
		for (int j = 0; j < arr[i]; j++)cout << i << "\n";

}