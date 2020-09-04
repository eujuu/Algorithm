#include <iostream>
#include <string>
int d[201][201];
int main() {
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) 
		d[1][i] = 1;
	
	for (int i = 1; i <= k; i++)
		d[i][1] = i;

	for (int i = 2; i <= k; i++) {
		for (int j = 2; j <= n; j++)
			d[i][j] = (d[i - 1][j] + d[i][j - 1]) % 1000000000;
	}
	/*
	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= n; j++)
			cout << d[i][j] << " ";
		cout << "\n";
	}
	*/
	cout << d[k][n] << endl;
	return 0;
}