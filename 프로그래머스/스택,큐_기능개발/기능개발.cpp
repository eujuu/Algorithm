#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	queue <int> tmp;
	int cnt = 1, now = 0;
	for (int i = 0; i < progresses.size(); i++) {

		tmp.push(ceil((100 - progresses[i]) / double(speeds[i])));
	}
	while (!tmp.empty()) {
		if (tmp.size() == 1) {
			answer.push_back(1);
			break;
		}
		int first = tmp.front();
		tmp.pop();
		while (!tmp.empty() && first >= tmp.front()) {
			cnt++;
			tmp.pop();
		}
		answer.push_back(cnt);
		cnt = 1;
	}
	return answer;
}