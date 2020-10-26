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

int main() {
	int num,score, tmp= 0, maxnum  = 0;
	for (int i = 1; i <= 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> tmp;
			sum += tmp;
		}
		if (sum > maxnum) {
			num = i;
			score = sum;
			maxnum = sum;
		}
	}
	cout << num << " " << score;
}