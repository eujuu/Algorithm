#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
#include "math.h"
using namespace std;

int main() {
	int h, m, plus;
	cin >> h >> m >> plus;

	m = m + plus;
	if (m >= 60) {
		h += m / 60;
		m = m % 60;
	}
	if (h > 23) {
		h -= 24;
	}
	cout << h << " " << m;
}