#include <iostream>
#include <string>

using namespace std;

int main() {
	string sen = "", output = ""; int max = -1, idx = 0;
	int alp[26] = { 0 };
	cin >> sen;
	for (int i = 0; i < sen.length(); i++) {
		alp[int(tolower(sen[i]) - 'a')]++;
	}
	for (int i = 0; i < 26; i++) {
		if (alp[i] > max) {
			max = alp[i];
			idx = i;
		}
	}
	output = toupper(char(idx + 'a'));
	for (int i = 0; i < 26; i++) {
		if (idx != i && max == alp[i])
			output = "?";
	}

	cout << output;

}