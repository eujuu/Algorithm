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
	int n,tmp, sum=  0;
	cin >> n;
	while (n--) {
		cin >> tmp;
		if (tmp == 0)
			sum -= 1;
		else
			sum += 1;
	}
	if (sum < 0)
		cout << "Junhee is not cute!";
	else
		cout << "Junhee is cute!";
}