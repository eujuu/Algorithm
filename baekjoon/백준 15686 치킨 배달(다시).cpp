#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <deque>
#include <map>
#include <stack>
#include "math.h"
using namespace std;
//https://www.acmicpc.net/problem/15686

int graph[51][51];
int  dx[] = { -1, 0, 1, 0,-1,  1,1, -1 };
int  dy[] = { 0, 1, 0, -1, 1, -1,1, -1 };
vector<int>answer;

int n, m, tmp;
int  dist(int r1, int r2, int x1, int x2) {
	return (abs(r1 - x1) + abs(r2 - x2));
}
int searching(int x, int  y) {
	int minimum = 9999;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (graph[i][j] == 1) {
				//minimum = min(dist(x, y, i, j), minimum);
				sum += dist(x, y, i, j);
			}
		}
	}
	//return minimum;
	return sum;
}
int main() {
	vector<pair<int, int>> chicken;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j =1; j <= n; j++) {
			cin >> tmp;
			graph[i][j] = tmp;
			if (tmp == 2) {
				chicken.push_back({ i,j });

			}
		}
	}
	for (auto& e : chicken) {
		answer.push_back(searching(e.first, e.second));
		cout <<"pos:("<< e.first<<", " <<e.second << ") "<<searching(e.first, e.second) << " ";
	}
	
	sort(answer.begin(), answer.end());
	int sum = 0;
	for(int i=0;i < m; i++) {
		sum += answer[i];
	}
	cout << sum;

}