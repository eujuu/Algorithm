#include <vector>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	vector<int> total_vec(2000000, 0);
	int total = nums.size() / 2;
	for (int i = 0; i < nums.size(); i++) {
		total_vec[nums[i]]++;
	}
	for (int i = 0; i < total_vec.size(); i++) {
		if (total_vec[i] != 0) {
			answer++;
		}
		if (answer == total)
			break;
	}
	return answer;
}