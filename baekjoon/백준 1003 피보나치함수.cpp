#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int map0[41];
int map1[41];
int fib[41];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tc, n;
	cin >> tc;
	fib[0] = 1; fib[1] = 1;
	map0[0] = 1; map1[0] = 0;
	map0[1] = 0; map1[1] = 1;
    for (int i = 0; i < tc; i++) {
        cin >> n;
		for (int j = 2; j <= n; j++) {
			map0[j] = map0[j - 1] + map0[j - 2];
			map1[j] = map1[j - 1] + map1[j - 2];

		}
        cout << map0[n] << " " << map1[n] << endl;
    }
	
}