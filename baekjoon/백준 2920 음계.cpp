#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
#include "math.h"
using namespace std;
vector<int> mus;
int main() {
	int n = 8, tmp;
	while (n--) {
		cin >> tmp;
		mus.push_back(tmp);
	}
	for (int i = 0; i < 7; i++) {
		if (mus[i + 1] == mus[i] + 1) {
			
			if (i == 6) {
				cout << "ascending";
				return 0;
			}
			continue;

		}
		else
			break;
	}
	for (int i = 0; i < 7; i++) {
		if (mus[i] == mus[i+1] + 1) {
			if (i == 6) {
				cout << "descending";
				return 0;
			}
			continue;

		}
		else
			break;
	}
	cout << "mixed";

}