#include <iostream>
#include <math.h>
using namespace std;
void conversion(int num, int b) {
	if (num == 0) return;
	conversion(num / b, b);

	cout << num % b<< " ";
}
int main() {

	int a, b;
	int m, tmp, total = 0;
	cin >> a >> b >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		total = total * a + tmp;
	}
	conversion(total, b);
	
}