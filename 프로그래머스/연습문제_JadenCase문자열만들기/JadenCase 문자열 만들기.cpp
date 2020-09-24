#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	vector<string> tmp;
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.length(); i++)
		s[i] = tolower(s[i]); //전체 소문자 변환
	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] == ' ') {
			s[i] = toupper(s[i]);
		}
	}
	answer = s;
	return answer;
}