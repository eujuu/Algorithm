#include <string>
#include <vector>
#include <algorithm>
#include  <iostream>
#include <queue>
#include <iostream>
using namespace std;
vector<int> gr[20001];
int visited[20001];
int dist[20001];
void bfs(int idx){
    visited[idx] = 1;
    queue<int> q;
    q.push(idx);
    while  (!q.empty()){
        int  now = q.front();
        q.pop();
        for(int i=0; i <  gr[now].size(); i++){
            if(visited[gr[now][i]]== 0){
                visited[gr[now][i]] =1;
                dist[gr[now][i]] = dist[now] +1;
                
                q.push(gr[now][i]);
            }
        }
    }
}
int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    int maxnum = 0;
    for(int  i=0; i <  edge.size(); i++){
        gr[edge[i][0]].push_back(edge[i][1]);
        gr[edge[i][1]].push_back(edge[i][0]);

    }
    bfs(1);
    for(int i= 1; i <n+1; i++){
        if(dist[i] >=  maxnum)
            maxnum = dist[i];
    }
    for(auto i : dist){
        if(i ==maxnum)
            answer+=1;
    }
    return answer;
}