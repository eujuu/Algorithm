#include <iostream>
#include <string>
using namespace std;
int map[26];
int main() {
	string str;
	int ans = 0;
	cin >> str;

	for (int i = 0; i < str.length() ; i++) {
		if (i + 1 < str.length() && (str.substr(i,2)== "c="|| str.substr(i, 2) == "c-" || str.substr(i, 2) == "d-" || str.substr(i, 2) == "lj" || 
			str.substr(i, 2) == "nj" || str.substr(i, 2) == "s="|| str.substr(i, 2) == "z=")) {
			ans++;
			i++;
			continue;
		}
		if (i + 2 < str.length() && str.substr(i, 3) == "dz=") {
			ans++;
			i += 2;
			continue;
		}
		ans++;
	}
	cout << ans;
}