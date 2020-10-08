#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;
int parent[1000001];
int cnt[1000001];
int find_parent(int a) {
	if (a == parent[a]) return a;
	return parent[a] = find_parent(parent[a]);
}
int unionparent(int a, int b) {
	a = find_parent(a);
	b = find_parent(b);
	if (a != b) {
		parent[b] = a;
		cnt[a] += cnt[b];
		cnt[b] = 1;
	}
	return cnt[a];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int tc,rela,idx1, idx2;
	cin >> tc;
	while (tc--) {
		map<string, int> fri;
		cin >> rela;
		int num = 1;
		for (int i = 1; i <= 2*rela; i++) {
			parent[i] = i;
			cnt[i] = 1;
		}
		while (rela--) {
			string a, b;
			 cin >> a >> b;
			if (fri.count(a) == 0) fri[a] = num++;
			idx1 = fri[a];
			if (fri.count(b) == 0) fri[b] = num++;
			idx2 = fri[b];
			cout << unionparent(idx1, idx2) << "\n";

		}
	}
}