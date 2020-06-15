#include <iostream>
#include <cmath>
using namespace std;
void num_1(int time);
void num_2(int time);
int main() {
	int N, i, j, new_N;
	cin >> N;
	new_N = N - 1;
	for (int i = 0; i < N; i++) {
		num_1(new_N / 2 + 1);
		cout << "\n";
		num_2(new_N / 2 + new_N % 2);
		cout << "\n";
	}
	
	return 0;
}
void num_1(int time) {
	for(int i =0; i < time; i++)
		cout << "* ";
}
void num_2(int time) {
	for (int i = 0; i < time; i++)
		cout << " *";
}