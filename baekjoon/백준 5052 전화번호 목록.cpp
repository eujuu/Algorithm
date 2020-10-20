#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int tc, st;
	vector<string> arr;
	//scanf("%d", &tc); 
	cin >> tc;
	string tmp;
	while (tc--) {
		int flag = 0;
		arr.clear();
		cin >> st;
		while (st--) {
			cin >> tmp;
			arr.push_back(tmp);
		}
		sort(arr.begin(), arr.end());
		///for (auto i : arr)
	//		cout << i << " ";
		
		for (int i = 0; i < arr.size() - 1; i++) {
			if (arr[i+1].find(arr[i]) == 0) {
				cout << "NO\n";
				flag = 1;
				break;
			}
		}
		if(flag==0)cout << "YES\n";
	}
	
}