#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int thirty_test(string str) {
	
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		sum += (str[i] - '0');
	}
	return sum;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int ans;
	cin >> str;
	ans = thirty_test(str);
	sort(str.begin(), str.end());
	if (str[0] == '0' &&ans % 3 == 0) {
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
	else
		cout << -1;
}


/*/
bool compare(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string n;
	vector <int > arr;
	cin >> n;
	for (int i = 0; i < n.length(); i++)
		arr.push_back(n[i] - '0');

	sort(arr.begin(), arr.end(), compare);

	//for (int i = 0; i < arr.size(); i++)
	//	cout << arr[i] << " ";
	int ans, ans_tmp = -1, tmp_int;
	do {
		string tmp;
		ans_tmp = -1, tmp_int = 0;
		for (int i = 0; i < arr.size(); i++) {
			//cout << arr[i] << " ";
			tmp += to_string(arr[i]);
		}
		//cout << "merge: " << tmp << " ";
		for (int i = tmp.length() - 1; i > -1; i--)
			tmp_int += (tmp[tmp.length() - 1 - i] - '0') * pow(10, i);
		//cout << tmp_int << endl;
		if (tmp_int % 30 == 0) {
			ans_tmp = tmp_int;
			break;
		}

	} while (prev_permutation(arr.begin(), arr.end()));
	cout << ans_tmp << endl;
}
*/