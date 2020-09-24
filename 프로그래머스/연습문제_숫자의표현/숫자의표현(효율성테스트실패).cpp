#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;
	int tmp = 0;
	for (int i = 1; i <= n / 2; i++) {
		tmp = i;
		for (int j = i + 1; j <= n; j++) {
			tmp += j;
			if (tmp == n) {
				answer += 1;
				break;
			}
		}
	}
	answer += 1;
	return answer;
}