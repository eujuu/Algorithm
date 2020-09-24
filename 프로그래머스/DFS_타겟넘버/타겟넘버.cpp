#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<int> num;
int tar, numsize, answer = 0;

void dfs(int idx, int sum) {
	if (idx == numsize) {
		if (sum == tar) {
			answer++;
		}
		return;
	}
	dfs(idx + 1, sum + num[idx]);
	dfs(idx + 1, sum - num[idx]);
}

int solution(vector<int> numbers, int target) {
	answer = 0;
	tar = target;
	num = numbers;
	numsize = numbers.size();
	dfs(0, 0);
	return answer;
}