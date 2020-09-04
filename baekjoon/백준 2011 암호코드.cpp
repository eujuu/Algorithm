#include <iostream>
#include <string>
int d[5001];
int arr[5001];
int main() {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	
	cin >> str;
	int len (str.length());

	for (int i = 1; i <= len; i++) {
		arr[i] = int(str[i - 1] - '0');
	}

	d[0] = 1;
	if ( arr[1] == 0) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 1; i <= len; i++) {
		if (arr[i] >= 1 && arr[i] <= 9)
			d[i] = (d[i - 1] + d[i]) % 1000000;
		if (i == 1) continue;
		int tmp = arr[i - 1] * 10 + arr[i];
		if (tmp >= 10 && tmp <= 26)
			d[i] = (d[i - 2] + d[i]) % 1000000;
	}

	cout << d[len] << endl;
}