#include <iostream>
#include <string>
using namespace std;
int map[26];
int main() {
	string str;
	int sum = 0;
	cin >> str;
	map[0] = 3; map[1] = 3; map[2] = 3;
	map[3] = 4; map[4] = 4; map[5] = 4;
	map[6] = 5; map[7] = 5; map[8] = 5;
	map[9] = 6; map[10] = 6; map[11] = 6;
	map[12] = 7; map[13] = 7; map[14] = 7;
	map[15] = 8; map[16] = 8; map[17] = 8; map[18] = 8;
	map[19] = 9; map[20] = 9; map[21] = 9;
	map[22] = 10; map[23] = 10; map[24] = 10; map[25] = 10;
	for (int i = 0; i < str.length(); i++) {
		char st = tolower(str[i]);
		sum += (map[st - 'a']);
	}
	cout << sum;
}