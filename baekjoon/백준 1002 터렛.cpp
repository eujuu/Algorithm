#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;



int main() {
	int tc, ans;
	cin >> tc;
	
	for (int i = 0; i < tc; i++) {
		vector<int> pos(6, 0);
		for (int j = 0; j < 6; j++)
			cin >> pos[j];
		double d = sqrt(pow(pos[3] - pos[0], 2) + pow(pos[4] - pos[1], 2));
		int minus = abs(pos[2] - pos[5]);
		int plus = pos[2] + pos[5];

		if (d == 0.0) {
			if (pos[2] == pos[5]) ans = -1;
			else ans = 0;
		}
		else {
			if (minus < d && plus> d) ans = 2;
			else if (plus == d || minus == d) ans = 1;
			else ans = 0;
		}
		cout << ans << endl;
	}
}