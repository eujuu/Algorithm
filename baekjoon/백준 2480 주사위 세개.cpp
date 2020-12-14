#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	vector<int>dice(7, 0);

	int a, maxcnt = 0, result = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a;
		dice[a]++;
		maxcnt = max(dice[a], maxcnt);
	}
	for (int i = 6; i >0; i--) {
		if (dice[i] == maxcnt) {
			if (maxcnt == 3)	result = 10000 + i * 1000;
			else if (maxcnt == 2) result = 1000 + i * 100;
			else result = i * 100;
			break;
		}
	}

	cout << result << endl;

}