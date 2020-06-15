#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
	int N, cnt, flag, sum = 0, j;
	cin >> N;
	char arr[80];
	for (int i = 0; i < N; i++) {
		cin >> arr;
		cnt = 0, sum = 0, flag = 0, j = 0;
		while (arr[j] != '\0') {
			//cout << sizeof(arr) / sizeof(char) << endl;
			//cout << "arr: " << arr << endl;
			if (arr[j] == 'O')
			{
				if (flag == 0)
					cnt = 1;
				else if (flag == 1)
					cnt++;
				flag = 1;
				//cout << cnt << " ";
				sum += cnt;
			}
			else {
				flag = 0;
				cnt = 0;
			}
			j++;
		}
		arr[0] = '\0';
		cout << sum << "\n";
	}
	return 0;
}