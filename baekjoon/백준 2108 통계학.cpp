#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
vector<int> val;
int num[8001];
int main() {
	int n, sum = 0, max = 0, min = -9999, max_val;
	bool not_fir = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		val.push_back(tmp);
		sum += tmp;
		num[tmp + 4000]++;

	}
	sort(val.begin(), val.end());

	for (int i = 0; i < 8001; i++) {
		if (num[i] == 0) continue;
		if (num[i] == min ) {
			if (not_fir) {
				max_val = i - 4000;
				not_fir = false;
			}
		}
		if (num[i] > min) {
			min = num[i];
			max_val = i - 4000;
			not_fir = true;
		}
		
	}
	cout << round((double)sum / n) << endl;
	
	cout << val[n / 2 ] << endl;
	cout << max_val << endl;
	cout << val.back() - val.front() << endl;
}