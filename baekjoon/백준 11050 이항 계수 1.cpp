#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
int dp[11];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	int ans;
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] * i;
	}
	if(n==m)
		ans  = dp[n] / (1 * dp[m]);
	else if(m==0)
		ans = dp[n] / (dp[n - m] *1);
	else

		ans = dp[n] / (dp[n-m] *  dp[m]);
	cout << ans;
}