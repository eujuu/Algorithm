#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

bool comp(tuple <int, string, int > a, tuple <int, string, int > b) {
	if (get<0>(a) == get<0>(b)) return get<2>(a) < get<2>(b);
	return get<0>(a) < get<0>(b);
}
int main() {
	int n, a;
	string b;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector < tuple <int, string, int >> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr.push_back(make_tuple(a, b, i));
	}
	sort(arr.begin(), arr.end(), comp);
	for (int i = 0; i < n; i++)
		cout << get<0>(arr[i]) << " " << get<1>(arr[i]) << "\n";

}