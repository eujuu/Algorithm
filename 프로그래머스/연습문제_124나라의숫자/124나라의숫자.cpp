#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";
	string world = "124";
	int i = 0;
	while (n > 0) {
		n -= 1;
		i = n % 3;
		answer = world[i] + answer;
		n /= 3;
	}
	return answer;
}