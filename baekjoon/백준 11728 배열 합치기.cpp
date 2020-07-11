#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int alp[26];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, tmp;
	cin >> a >> b;
	vector<int> n;
	vector<int> m;
	for (int i = 0; i < a; i++) {
		cin >> tmp;
		n.push_back(tmp);
	}
	for (int i = 0; i < b; i++) {
		cin >> tmp;
		m.push_back(tmp);
	}
	n.insert(n.begin(), m.begin(), m.end());
	sort(n.begin(), n.end());
	for (int i = 0; i < n.size(); i++)
		cout << n[i] << " ";
}