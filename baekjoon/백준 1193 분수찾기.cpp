#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

long long fib[91];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int idx;
	cin >> idx;
	int i = 1, diff = 0;
	for (int sum = 0; sum + i < idx; i++) {
		sum += i;
		diff =  idx - sum;
	}
	
	if (i % 2 == 1) cout << i - diff + 1 << "/" << diff;
	else cout << diff << "/" << i - diff + 1;
}