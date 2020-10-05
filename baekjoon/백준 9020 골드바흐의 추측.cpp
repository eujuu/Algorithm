#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
bool check[15000];

int main() {
	int num, i, j, tmp, ans1, ans2, minnum= 999999;
	int tc;
	cin >> tc;
	check[0] = check[1] = true;
	check[2] = false;
	for (i = 2; i < 15000; i++) {
		if (check[i] == false) {
			for (j = i * 2; j < 15000; j += i)
				check[j] = true;
		}
	}
	while (tc--) {
		cin >> num;// scanf("%d", &num);
		
		minnum = 999999;
		ans1 = 0; ans2 = 0;
		for (i = 2; i < num / 2 + 1; i++) {
			if (check[i] == false) {
				tmp = num - i;
				if (tmp > 0 && check[tmp] == false) {
					if ((max(ans1, ans2) - min(ans1, ans2)) <= minnum)
						ans1 = i; ans2 = tmp;

				}
			}
		}
		cout << min(ans1, ans2) << " " << max(ans1, ans2) << endl;
		
	}
}