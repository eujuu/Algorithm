#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;
int parent[1000001];
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
	scanf("%d%d", &n, &m);
	//cin >> n >> m;
	for (int i = 0; i <= n; i++)
		parent[i] = i;
	while (m--) {
		scanf("%d%d%d", &a, &b, &c);
		//cin >> a >> b >> c;
		if (a == 0) {
			unionparent(b, c);
		}
		if (a == 1) {
			if(find_parent(b) == find_parent(c))  cout << "YES\n";
			else cout << "NO\n";
		}
	}

}