#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	string str;
	int cnt[4] = { 0 };
	while (getline(cin, str)) {
		if (str == "") break;
		int cnt[4] = { 0 };
		for (int j = 0; j < str.length(); j++) {
			char i = str[j];
			if (int(i) >= 97 && int(i) <= 122) cnt[0]++;
			else if (int(i) >= 65 && int(i) <= 90) cnt[1]++;
			else if (int(i) >= 48 && int(i) <= 57) cnt[2]++;
			else if (int(i) == 32) cnt[3]++;
		}
		for (auto num : cnt)
			cout << num << " ";
		cout << endl;
	}
	/*
	cout <<"소: "<< int('a') << " " << int('z') << endl;
	cout <<"대:" <<  int('A') << " " << int('Z') << endl;
	cout <<"숫자" <<  int('0') << " " << int('9') << endl;
	cout <<"공백:" <<  int(' ') << endl;
	*/
}