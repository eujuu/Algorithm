#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<string> answer;
vector<int> visited;

int siz;
bool check_visited(){
    for(int i=0; i <siz; i++){
        if(visited[i] == 0 )return false;
    }
    return true;
}
bool comp(vector<string> a, vector<string> b){
    return a[1] < b[1];
}
bool dfs(int now, int cnt, vector<vector<string>>& tickets){
   // if (cnt == siz) return false;
    if (visited[now] == 1) return false;
    
    visited[now] = 1;
    //cout << now << " ";
    string start = tickets[now][0];
    string end = tickets[now][1];
    answer.push_back(end);
    if(check_visited()) return true;
    for(int i =0;i < siz; i++){
        if (visited[i]==0 && tickets[i][0] == end){
            //cout << "dfs:" << i << " city: " << end << endl;
            if (!dfs(i, cnt, tickets)){
                answer.erase(answer.end()-1);
                visited[i] = 0;
                continue;
            }
           return true;
        }
        
    }
    visited[now] = 0;
    return false;
}
vector<string> solution(vector<vector<string>> tickets) {
    
    int cnt = 0;
    siz= tickets.size();
    for(int i=0 ;i  < siz; i++)
        visited.push_back(0);
    //answer.push_back("ICN");
    sort(tickets.begin(), tickets.end(), comp);
    for(int i=0; i < tickets.size(); i++){
        cnt = 1;
        answer.clear();
        for(int i=0 ;i  < siz; i++)
            visited.push_back(0);
        
        if(tickets[i][0] == "ICN"){
            answer.push_back("ICN");
            if(dfs(i, cnt, tickets))
                return answer;       
            
        }
    }
    
}