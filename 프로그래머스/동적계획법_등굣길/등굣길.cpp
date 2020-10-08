#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;
int dx[] = {0, 1};
int dy[] = {1, 0};
int dp[101][101] = {0};
int map[101][101] = {0};
int row, col;
int answer  =0;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    row =n; col = m;
    for(int i=0; i <puddles.size(); i++){
        map[puddles[i][1]][puddles[i][0]] =-1;
    }
    dp[1][0]= 1;
    for(int i=1; i <=row; i++){
        for(int j=1; j <= col; j++){
            if(map[i][j] == -1 ) dp[i][j]= 0;
            else dp[i][j] =((dp[i-1][j] + dp[i][j-1])  % 1000000007);

        }    
    }
   
    answer = dp[row][col];
    return answer;
}