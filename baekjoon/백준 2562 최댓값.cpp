#include <iostream>
#include <cmath>  
using namespace std;

int main() {
	int arr[9], idx = 0, max = -1000001;
	
	
	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	for (int i = 0; i < 9; i++) {

		if (arr[i] > max) {
			max = arr[i];
			idx = i+1;
		}
	}
	cout << max << "\n" << idx;
}