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
	int total,tmp, sum=0, tc=9;
	cin >> total;
	while (tc--) {
		cin >> tmp;
		sum += tmp;
	}
	cout << total - sum;
    
}
