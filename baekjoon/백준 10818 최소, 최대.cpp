#include <iostream>
#include <cmath>  
using namespace std;

int main() {
	int N, idx = 0, max = -1000001;
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = 0; i < N; i++) {

		if (arr[i] > max) {
			max = arr[i];
			idx = i;
		}
	}
	cout << max << "\n" << idx;
}