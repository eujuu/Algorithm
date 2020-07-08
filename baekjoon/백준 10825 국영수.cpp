#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

bool comp(tuple <string, int, int, int > a, tuple <string, int, int, int > b) {
	if (get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b) && get<3>(a) == get<3>(b)) return get<0>(a) < get<0>(b);
	else if (get<1>(a) == get<1>(b) && get<2>(a) == get<2>(b)) return  get<3>(a) > get<3>(b);
	else if (get<1>(a) == get<1>(b))  return get<2>(a) < get<2>(b);
	return get<1>(a) > get<1>(b);
}
int main() {
	int n, kor, eng,math;
	string subject;
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	vector < tuple <string, int, int, int >> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> subject >> kor >> eng >> math;
		arr.push_back(make_tuple(subject, kor, eng, math));
	}
	sort(arr.begin(), arr.end(), comp);
	for (int i = 0; i < n; i++)
		cout << get<0>(arr[i]) << "\n";

}