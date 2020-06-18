#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int up, down, total, days;
	cin >> up >> down >> total;
	days = (total - down) / (up - down);
	if ((total - down) % (up - down) == 0)
		cout << days;
	else
		cout << days + 1;

}