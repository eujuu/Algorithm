#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int d[10001];
int non_selfnum(int n) {
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}
int main() {
	for (int i = 1; i < 10000; i++) {
		int tmp = non_selfnum(i);
		if (tmp <= 10000) d[tmp] = 1;
	}
	for (int i = 1; i < 10000; i++) {
		if (d[i] != 1) cout << i << endl;
	}
	//cout << non_selfnum(75);
}