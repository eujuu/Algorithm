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
	int k, a, b;
	
	cin >> k;
	while (k--) {
		string str = "";
		long long total = 0;
		cin >> a >> b;
		a = a % 10;
		b = b % 4;
		if (b == 0) b = 4;
		total = pow(a, b);
		
		if (total == 0)
			cout << "10" << endl;
		else {
			str = to_string(total);
			cout << str[str.length() - 1] << endl;
		}
	}

}