#include <string>
#include <vector>
#include <iostream>
using namespace std;

int dp[501][501] = {0};
int solution(vector<vector<int>> triangle) {
    int answer = 0;
    dp[0][0] = triangle[0][0];
    int n = triangle.size();
    int line;
    for(int i= 0; i < n; i++){
        line = triangle[i].size();
        for(int j =0; j < n-line; j++)
            triangle[i].push_back(0);
    }
    for(int i=1;i < n; i++){
        for(int j=0; j < n; j++){
            if(j == 0 )dp[i][j] = dp[i-1][j] + triangle[i][j];
            else if (j == i+1) dp[i][j] = dp[i-1][j-1] + triangle[i][j];
            else dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
            
            if( i== n-1){
                if (dp[i][j] > answer) answer = dp[i][j];
            }
        }
        
           
    }
     
    return answer;
}