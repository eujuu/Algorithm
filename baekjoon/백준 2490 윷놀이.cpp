#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
#include <stack>
#include "math.h"
using namespace std;
stack<int> arr;
vector<int> cnt(2);
int main() {
	int n = 3, tmp;
	while (n--) {
		vector<int> cnt(2);
		for (int i = 0; i < 4; i++) {
			cin >> tmp;
			cnt[tmp]++;
		}
		if (cnt[0] == 0)
			cout << "E" << endl;
		else if (cnt[0] == 1)
			cout << "A" << endl;
		else if (cnt[0] == 2)
			cout << "B" << endl;
		else if (cnt[0] == 3)
			cout << "C" << endl;
		else
			cout << "D" << endl;
	}
}