#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int n, m, num, min = 99999, minsub = 99999;
	vector<int> numarr;
	vector<int> card;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num;
		numarr.push_back(num);
		if (i <3 ) card.push_back(0);
		else card.push_back(1);
	}
	sort(numarr.begin(), numarr.end());
	
	do {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			
			if (card[i] == 0) {
				sum += numarr[i];
			}
		}
		
		if (m - sum <= minsub && m >= sum) { minsub = m - sum; min = sum; };
	} while (next_permutation(card.begin(), card.end()));

	cout << min;
}