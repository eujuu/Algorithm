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
int main() {
	int k, tmp;
	cin >> k;
	while (k--) {
		cin >> tmp;
		if (tmp == 0) {
			arr.pop();
		}
		else {
			arr.push(tmp);
		}
	}
	int sum = 0;
	while (!arr.empty()) {
		tmp = arr.top();
		sum += tmp;
		arr.pop();
	}
	cout << sum;
}