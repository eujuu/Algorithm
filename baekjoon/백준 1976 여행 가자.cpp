#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;
int parent[201];
int city[201];
int find_parent(int a) {
	if (a == parent[a]) return a;
	return parent[a] = find_parent(parent[a]);
}
void unionparent(int a, int b) {
	a = find_parent(a);
	b = find_parent(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int main() {
	vector<pair<int, int>> arr;
	int n, m,a , b, c;
	//scanf("%d%d", &n, &m);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		parent[i] = i;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a;
			if (a == 1)unionparent(i, j);
		}
	}
	int flag = 1;
	int tmpcity;
	vector<int> tmp;
	for (int i = 0; i <m; i++) {
		cin >> tmpcity;
		tmp.push_back(tmpcity);
	}
	for (int i = 0; i < m-1; i++) {

		if(find_parent(tmp[i])!=find_parent(tmp[i+1])){
			flag = 0;
			break;
		}
	}
	if(flag == 1) cout << "YES";
	else cout << "NO\n";
}