#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
	int answer = 0;
	int leng = A.size() - 1;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0; i <= leng; i++) {
		answer += (A[i] * B[leng - i]);
	}
	return answer;
}