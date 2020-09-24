#include <string>
#include <vector>
#include <bitset>
#include <iostream>
using namespace std;

int check_one(string str) {
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == '1')
			cnt++;
	return cnt;
}
int solution(int n) {
	int answer = n, base_cnt = 0;
	string converse = bitset<20>(n).to_string();
	base_cnt = check_one(converse);
	int cnt = 0;
	while (true) {
		n++; answer++;
		cnt = 0;
		converse = bitset<20>(n).to_string();
		cnt = check_one(converse);
		if (base_cnt == cnt)
			break;

	}
	return answer;
}