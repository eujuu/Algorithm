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
vector<int> room(101);
int main() {
	int tc, n;
	cin >> tc;
	while (tc--) {
		int result = 0;
		cin >> n;
		for (int i = 0; i <= n; i++)
			room[i] = 0;
		for (int i = 0; i <= n; i+=2)
			room[i] = 1;
		for (int i = 3; i <= n; i++) {
			for (int j = 0; j <= n; j += i) {
				if (room[j] == 1)
					room[j] = 0;
				else
					room[j] = 1;
			}
				
		}
		for (int i = 1; i <= n; i++) {
			if (room[i] == 0)
				result += 1;
		}
		cout << result << endl;
	}

}