#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
vector<int> visited;
int siz, cnt = 0;
bool check_justone(string a, string b){
    int check =0;
    int total = a.length();
    //cout << "compare: " << a << " " << b <<endl;
    for(int i=0; i <total; i++){
        if (a[i] == b[i]) check++;
    }
    if( abs(check - total) == 1) return true;
    return false;
}
bool dfs(int i, string start, vector<string>& words, string& target){
    if (start == target) return true;
    if (visited[i] == 1) {cnt--;return false;}
    if( check_justone(start, target)){cnt++; return true;}
    visited[i] = 1;
    cnt++;
    //cout << "in: " << start << endl;
    for(int i=0; i < siz; i++){
        if(visited[i] == 0 && check_justone(start, words[i])){
            
            if(dfs(i, words[i], words, target)){
                //cout << "dfs: " << words[i] <<endl;
                return true;
            }
        }
    }
    cnt--;
    return false;
}
int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    siz = words.size()+1;
    words.insert(words.begin(), begin);
    if(find(words.begin(), words.end(), target) == words.end())
        return 0;
    
    for(int i=0; i < siz; i++)
        visited.push_back(0);
    
    dfs(0, begin, words,target);
    return cnt;
}