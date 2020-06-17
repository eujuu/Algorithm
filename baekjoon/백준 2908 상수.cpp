#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;
int char2int(char *a) {
	int result=0, size =2;
	for (int i = 0; i <= 2; i++) {
		result += (int(a[i]-'0') * pow(10, size));
		size--;
	}
	return result;
}
int main() {
	char A[4], B[4];
	int a, b;

	cin >> A >> B;

	 reverse(A, A + 3);	 reverse(B ,B + 3);
	 a = char2int(A);	b = char2int(B);
	 if (a > b) {
		 cout << A;
	 }
	 else{
		 cout << B;
	 }

}