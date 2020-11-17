#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	string tmp;
	map<string, int> person;
	vector<string> ans;
	while (n--) {
		cin >> tmp;
		person[tmp] = 2;
	}
	while (m--) {
		cin >> tmp;
		if (person[tmp] == 2)
			ans.push_back(tmp);
	}
	cout << ans.size() << endl;
	sort(ans.begin(), ans.end());
	for (auto& e : ans)
		cout << e << endl;

}