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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n = 5, tmp, sum = 0;
	while (n--) {
		cin >> tmp;
		sum += (pow(tmp, 2));
	}
	cout << sum % 10;
}
