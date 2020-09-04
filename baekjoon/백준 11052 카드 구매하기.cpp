#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int arr[1001];
int cnt[1001];
int main() {
	int n, tmp, tc;
	cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		cnt[1] = arr[1];
		for (int i = 2; i <= n; i++) {
			cnt[i] = arr[i];
				for (int j = i / 2; j < i; j++) {
					if (cnt[j] + cnt[i - j] > cnt[i])
						cnt[i] = cnt[j] + cnt[i - j];
				}
		
			


		}
		cout << cnt[n] << endl;
	
}