#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
	int testcase, N, sum, cnt;
	cin >> testcase;
	
	for (int i = 0; i < testcase; i++) {
		N = 0, sum = 0, cnt = 0;
		cin >> N;
		int *score = new int[N];
		for (int j = 0; j < N; j++) {
			cin >> score[j];
			
			sum += score[j];
		}
		for (int j = 0; j < N; j++) {
			if (score[j] > double(sum) / N)
				cnt++;
		}
		cout << fixed;
		cout.precision(3);
		cout << double((double(cnt) / double(N)) * 100) << "%\n";
		delete[]score;
	}
	return 0;
}