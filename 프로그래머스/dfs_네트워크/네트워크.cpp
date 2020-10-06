#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<int> visited;
bool dfs(int x, vector<vector<int>>& comp){
    if(visited[x] == 1) return false;
    visited[x] = 1;
    for(int i =0 ; i < comp[x].size(); i++){
        if(visited[comp[x][i]] == 0 ){
            dfs(comp[x][i], comp);
        }
    }
     return true;
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<vector<int>> compo(201);
    for(int i=0; i < n; i++)
        visited.push_back(0);
    for(int i=0; i < computers.size(); i++){
        for(int j=0; j < computers[0].size(); j++){
            if (i!=j &&  computers[i][j] == 1) compo[i].push_back(j);
        }
    }
    /*
    for(int i=0;i < n; i++){
        for(int j= 0;j < compo[i].size(); j++)
            cout << compo[i][j] <<" ";
        cout << endl;
    }
    */
    for(int i=0; i < n; i++){
        if(dfs(i, compo))
            answer++;
    }
    return answer;
}