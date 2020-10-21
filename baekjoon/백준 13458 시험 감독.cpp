#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
#include "math.h"
using namespace std;
int student[1000001];
int tmp[1000001];
bool checkZero(int w) {
	for (int i = 1; i <= w; i++) {
		if (student[i] != 0)
			return false;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n, tmp, b, c,ans =0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> tmp;
		student[i] = tmp;
	}
	
	cin >> b >> c;
	
	for (int i = 1; i <= n; i++) {
		//총감독관
		tmp = student[i] - b;
		if (tmp <= 0)student[i] = 0;
		else		student[i] = tmp;
		ans++;
	}
	if (checkZero(n)) {
		cout << ans;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		//부감독관
		ans += ceil(double(student[i]) / c);
	}
	cout << ans;
}