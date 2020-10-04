#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int map[1001][1001];
int dp[1001][1001];
int main() {
	int n, minnum = 1001, answer = 1001;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++)
			cin >> map[i][j];
	}
	for (int i = 0; i < 3; i++)
		dp[0][i] = map[0][i];
	for (int i = 1; i < n; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + map[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + map[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + map[i][2];
		
	}

	answer = min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
	
	cout << answer;
}
