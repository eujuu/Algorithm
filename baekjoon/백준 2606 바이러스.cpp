#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };
int visited[101] = { 0 };

int cnt = 0;
bool dfs(int x, vector<vector<int>>& arr) {
	if (visited[x] == 1) return false;
	visited[x] = 1;
	cnt++;
	for (int i = 0; i < arr[x].size(); i++) {
		//cout << "visit " << arr[x][i] << endl;
		dfs(arr[x][i], arr);
		
	}
	return false;

}
int main() {
	int comp_cnt, comp_pair, tmp1, tmp2;
	vector<vector<int>> computer(999999);
	cin >> comp_cnt >> comp_pair;

	while (comp_pair--) {
		cin >> tmp1 >> tmp2;
		computer[tmp1].push_back(tmp2);
		computer[tmp2].push_back(tmp1);
	}
	/*
	for (int i = 1; i <= comp_cnt; i++) {
		for (int j = 0; j < computer[i].size(); j++)
			cout << computer[i][j] << " ";
		cout << endl;
	}
	*/
	dfs(1, computer);
	cout << --cnt;
}