#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int alp[26];
int main() {
	vector <int> arr;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string k;
	cin >> k;
	for (int i = 0; i < k.length(); i++) {
		alp[int(k[i] - 'a')]++;
	}
	for (int i = 0; i < 26; i++)
		cout << alp[i] << " ";

}