#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int map[501][501];
long long dp[501][501];

int main() {
	int n, tmp, idx = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {

		for (int j = 0; j <= i; j++) {
			cin >> map[i][j];
		}
	}
	dp[0][0] = map[0][0];
	long long maxnum = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][j] + map[i][j];
			else if (i == j) dp[i][j] = dp[i - 1][j - 1] + map[i][j];
			else dp[i][j] = max(dp[i - 1][j - 1] + map[i][j], dp[i - 1][j] + map[i][j]);
			if (i == n - 1)
				maxnum = max(maxnum, dp[i][j]);
		}
	}


	cout << maxnum;
}
