#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> arr;
	long long start = 1;
	long long end = 0;
	long long max = 0;
	int n, k, tmp;
	scanf("%d%d", &n, &k);  //cin >> n >> k; //
	for(int i=0; i < n; i++) {
		scanf("%d", &tmp);// cin >> tmp;
		arr.push_back(tmp);
		if (tmp > end) end = tmp;
	}
	
	
	while (start <= end) {
		long long mid = (start + end) / 2;
		int cnt = 0;
		//cout << start << " " << end << " " << mid << " " << endl;
		for (int i = 0; i < n; i++) 
			
			cnt += (arr[i] / mid);
			//cout << arr[i] << " " << mid << " " << cnt << endl;
		
		//cout << cnt << " " <<  k << endl;
		if (cnt >= k) {
			start = mid + 1;
			if (mid > max)
				max = mid;
		}
		else end = mid - 1;

	}
	cout << max << endl;

}