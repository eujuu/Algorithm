#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
#include "math.h"
using namespace std;
vector<pair<int, int>> station;
int main() {
	int a, b;
	int n = 4;
	while (n--) {
		cin >> a >> b;
		station.push_back({ a, b });
	}
	int sum = 0, maxnum = 0;
	for (int i = 0; i < 4; i++) {
		int out_people = station[i].first;
		int in_people = station[i].second;
		
		sum = sum - out_people + in_people;
		maxnum = max(maxnum, sum);
	}
	cout << maxnum;
}