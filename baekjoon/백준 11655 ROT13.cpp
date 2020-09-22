#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		char now = str[i];
		if (int(now) >= 97 && int(now) <= 122) {
			str[i] = 97 + (int(now)- 97 + 13) % 26;
		}
		else if (int(now) >= 65 && int(now) <= 90) {
			str[i] = 65 + (int(now) - 65 + 13) % 26;
		}
	}
	cout << str << endl;
}