#include <string>
#include <vector>

using namespace std;
int d[2001];
long long solution(int n) {
	long long answer = 0;
	d[0] = 1; d[1] = 1; d[2] = 2;
	for (int i = 3; i <= n; i++)
		d[i] = (d[i - 1] + d[i - 2]) % 1234567;
	answer = d[n];
	return answer;
}