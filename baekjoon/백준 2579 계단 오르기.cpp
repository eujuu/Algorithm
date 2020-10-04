#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int stair[301];
int dp[301];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> stair[i];
	int sum = stair[n - 1];
	dp[0] = stair[0];
	dp[1] = max(stair[1], stair[0] + stair[1]);
	dp[2] = max(stair[0] + stair[2], stair[1] + stair[2]);
	for (int i = 3; i < n; i++)
		dp[i] = max(stair[i] + dp[i - 2], stair[i] + stair[i - 1] + dp[i - 3]);
	cout << dp[n - 1];

}
