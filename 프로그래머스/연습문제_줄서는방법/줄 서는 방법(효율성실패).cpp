#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, long long k) {
	vector<int> answer;
	vector<int> tmp;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		tmp.push_back(i);
	do {
		cnt++;
		if (cnt == k) {
			answer = tmp;
			break;
		}

	} while (next_permutation(tmp.begin(), tmp.end()));
	return answer;
}