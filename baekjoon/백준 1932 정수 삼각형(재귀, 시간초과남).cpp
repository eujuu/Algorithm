#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int map[501][501];
long long line_max = 0;
void searching(int line, int idx, int total, long long sum) {
	if (line == total) {
		if (sum > line_max) line_max = sum;
		return;
	}


	searching(line + 1, idx, total, sum + map[line][idx]);
	searching(line + 1, idx + 1, total, sum + map[line][idx + 1]);

}
int main() {
	int n, tmp, idx = 0;
	
	cin >> n;
	for (int i = 1; i <= n; i++) {

		for (int j = 0; j < i; j++) {
			cin >> tmp;
			map[idx][j] = tmp;
		}
		idx++;
	}
	long long sum = map[0][0];
	searching(1, 0, n, sum);
	cout << line_max;
}

