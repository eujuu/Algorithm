#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int  tc, n, k, tmp,tmp2, tar;
	int sum;
	cin >> tc;
	while (tc--) {
		queue<int>q;
		int indegree[1001] = { 0 };
		vector<int>arr[1001];
		int dp[1001] = { 0 };
		vector<int>time;
		int flag = 0;
		cin >> n >> k;
		time.push_back(0);
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			time.push_back(tmp);
		}
		for (int i = 1; i <= k; i++) {
			cin >> tmp >> tmp2;
			arr[tmp].push_back(tmp2);
			indegree[tmp2]++;
		}
		cin >> tar;
		for(int i = 1; i<=n; i++){
			if (indegree[i] == 0) {
				q.push(i);
				dp[i] = time[i];
			}
		}
		int maxnum = 0;
		while (!q.empty()) {
			int first = q.front();
			if (first == tar) 	break;
			
			q.pop();
			maxnum = 0;
			for (int i = 0; i < arr[first].size(); i++) {
				indegree[arr[first][i]]--;
				if(time[arr[first][i]] + dp[first]> dp[arr[first][i]])
					dp[arr[first][i]] = time[arr[first][i]] + dp[first];
				if (indegree[arr[first][i]] == 0) {
					if (arr[first][i] == tar) {
						flag = 1;
						break;
					}
					q.push(arr[first][i]);
					
				}
			}
			if (flag == 1) break;

		}
		cout << dp[tar] << "\n";
	}
	
}