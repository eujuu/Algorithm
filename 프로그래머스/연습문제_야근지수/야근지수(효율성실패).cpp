#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
long long solution(int n, vector<int> works) {
	long long answer = 0;
	for (int i = 0; i < n; i++) {
		sort(works.begin(), works.end(), desc);
		if (works[0] != 0) works[0]--;
		else return 0;
	}
	for (int i = 0; i < works.size(); i++) {
		// cout << works[i] <<" ";
		answer += (pow(works[i], 2));
	}
	return answer;
}