#include<string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
	bool answer = true;
	stack <char> st;
	if (s[0] == '(') {
		//st.push(s[0]);
		for (int i = 0; i < s.length(); i++) {
			char ss = s[i];
			if (ss == '(')
				st.push(ss);
			else {
				if (!st.empty())
					st.pop();
				else {
					answer = false;
					break;
				}
			}
			if (st.empty())
				answer = true;
			else
				answer = false;
		}
	}
	else
		answer = false;

	return answer;
}