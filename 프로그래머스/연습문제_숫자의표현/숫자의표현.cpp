#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	int tmp = 0;
	int low = 1, high = 2;
	tmp = low;
	while (1) {
		if (tmp == n) {
			answer++;
			tmp -= (low++);
		}
		else if (tmp > n)
			tmp -= (low++);
		else
			tmp += (high++);
		if (high == n) break;

	}
	return ++answer;
}