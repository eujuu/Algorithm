#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <math.h>
using namespace std;
int main() {
	int n, max = 0;
	long long max_tmp = 0, tmp = 0;
	map <long long, int> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		m[tmp] +=1;
	}
	for (auto it : m) {
	
		if (it.second > max) {
			max = it.second;
			max_tmp = it.first;
		}
		else if (max == it.second && max_tmp > it.first)
			max_tmp = it.first;
			
	}
	cout << max_tmp << endl;
	
	return 0;
}