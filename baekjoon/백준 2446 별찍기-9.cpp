#include <iostream>
#include <cmath>  
using namespace std;

int main() {
	int N, min=9999, max = -1;
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = 0; i < N; i++) {
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	cout << min << " " << max;
}