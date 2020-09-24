#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
	string answer = "", tmp = "";
	vector<int> vec;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') tmp += s[i];
		if (s[i] == ' ' || i == s.length() - 1) {
			vec.push_back(stoi(tmp));
			tmp = "";
		}
	}
	sort(vec.begin(), vec.end());

	answer += to_string(vec[0]);
	answer += " ";
	answer += to_string(vec[vec.size() - 1]);
	return answer;
}