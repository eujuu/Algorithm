#include <iostream>
using namespace std;

int main() {
	int alp[26];
	for (int i = 0; i < 26; i++)
		alp[i] = -1;
	char inp[100];
	int j = 0;
	cin >> inp;
	while (inp[j] != '\0') {
		if(alp[int(inp[j] - 'a')] == -1)
			alp[int(inp[j] - 'a')] = j;
		j++;
	}
	for (int i = 0; i < 26; i++)
		cout << alp[i] << " ";
}