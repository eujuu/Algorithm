#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
int parent[1001];
int findParent(int a) {
	if (a == parent[a]) return a;
	return parent[a] = findParent(parent[a]);
}
void unionParent(int a, int b) {
	a = findParent(a);
	b = findParent(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int tc, n, m, a, b;
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		int cnt = 0;
		for (int i = 1; i <= n; i++)
			parent[i] = i;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			if (findParent(a) != findParent(b)) {
				unionParent(a, b);
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}