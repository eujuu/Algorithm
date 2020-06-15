#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
	int N, i;
	double max = -1, new_score, sum = 0;
	cin >> N;
	cout << setprecision(6);
	double *arr = new double[N];
	for (i = 0; i < N; i++)
		cin >> arr[i];
	for (i = 0; i < N; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	for (i = 0; i < N; i++) {
		new_score = arr[i] / max * 100;
		sum += new_score;
	}

	cout << double(sum) / N;

	return 0;
}