#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
vector<int> num;
int n, c, tmp;
void make_vec(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			num.push_back(i * j);
		}
	}
	sort(num.begin(), num.end());
}

int main() {
	int n, k;
	cin >> n >> k;
	make_vec(n);
	//for (auto i : num)
	//	cout << i << " ";
	cout << num[k-1];

}