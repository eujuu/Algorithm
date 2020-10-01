#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k, cnt = 0, idx= 0;
	cin >> n >> k;
	

	vector<int> num;
	vector<int> ans;
	for (int i = 0; i < n; i++)
		num.push_back(i + 1);
	while (true) {
		if (num.size() == 1) { ans.push_back(num[0]);  break; }
		
		int leng = num.size();
		int tmp = num[(idx + k - 1) % leng];
		num.erase(num.begin() + (idx + k - 1) % leng);
		ans.push_back(tmp);
		idx = (idx + k - 1) % leng;
		
	}
	cout << "<";
	for (int i = 0; i < n - 1; i++)
		cout << ans[i] << ", ";
	cout << ans[n - 1] << ">";
}