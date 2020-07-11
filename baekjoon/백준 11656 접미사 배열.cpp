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
	string str;
	cin >> str;
	vector<string> arr;

	for (int i = 0; i < str.length(); i++) {
		arr.push_back(str.substr(i, str.length() - i));
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << "\n";
}