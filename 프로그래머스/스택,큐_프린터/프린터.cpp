#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 1;
	queue < pair<int, int>> q;
	priority_queue <int, vector<int>, less<int>> pq;
	for (int i = 0; i < priorities.size(); i++) {
		q.push(make_pair(i, priorities[i]));
		pq.push(priorities[i]);
	}
	while (!q.empty()) {
		int idx = q.front().first;
		int val = q.front().second;
		q.pop();
		if (val == pq.top()) {
			if (location == idx) return answer;
			else {
				answer++;
				pq.pop();
			}
		}
		else
			q.push(make_pair(idx, val));
	}
	return answer;
}