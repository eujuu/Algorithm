#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int cnt, sum = 0;
	cin >> cnt;
	int alp[26] = { 0 };
	char arr[100];
	for (int i = 0; i < cnt; i++) {
		cin >> arr;
		bool flag = true;
		for (int j = 0; arr[j]; j++) {
			for (int k = 0; k < j; k++) {
				if (arr[j] != arr[j - 1] && arr[j] == arr[k]){
					flag = false;
					break;
				}
			}
		}
		if (flag) sum++;
	}
	cout << sum;

	return 0;
}