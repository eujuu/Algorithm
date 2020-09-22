#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
char ch[50] = { 0 };
int VPS() {
	stack<char>s;
	for (int j = 0; j < (int)strlen(ch); j++) {
		if (ch[j] == '(') {
			s.push(ch[j]);
		}
		else {
			if (!s.empty())
				s.pop();
			else
				return 0;
		}

	}
	return s.empty();
}
int main() {
	int i, test_case;
	cin >> test_case;

	for (i = 0; i < test_case; i++) {
		cin >> ch;
		if (VPS())
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}