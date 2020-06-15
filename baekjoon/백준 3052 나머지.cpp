#include <iostream>
#include <cmath>  
using namespace std;

int main() {
	int arr[10], count = 0, output[42] = { 0, };
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++) {
		if (output[arr[i]] == 0)
			output[arr[i]]++;

	}
	for (int i = 0; i < sizeof(output)/sizeof(int); i++) {
		
		if (output[i] == 1)
			count++;
	}
	cout <<  count;
	return 0;
}