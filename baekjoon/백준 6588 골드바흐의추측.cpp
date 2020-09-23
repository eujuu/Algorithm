#include <iostream>
using namespace std;
bool check[1000001];

int main() {
	int num, i, j, tmp, flag = 0;

	check[0] = check[1] = true;

	for (i = 2; i < 1000001; i++) {
		if (check[i] == false) {
			for (j = i * 2; j < 1000001; j += i)
				check[j] = true;
		}
	}

	scanf("%d", &num);
	while (num != 0) {
		for (i = 3; i < num / 2 + 1; i++) {
			if (check[i] == false) {
				tmp = num - i;
				if (tmp > 0 && check[tmp] == false) {
					cout << num << " = " << i << " + " << tmp << '\n';
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
			cout << "Goldbach's conjecture is wrong.\n";
		scanf("%d", &num);
	}

}