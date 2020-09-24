#include <string>
#include <vector>
#include <queue>
using namespace std;
int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int solution(vector<int> arr) {
	int answer = 0;
	queue<int> q;
	for (auto i : arr)
		q.push(i);
	int first = q.front();
	q.pop();
	while (!q.empty()) {
		int second = q.front();
		q.pop();
		first = lcm(first, second);
	}
	answer = first;
	return answer;
}