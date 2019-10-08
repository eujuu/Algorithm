#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    string name = "";
    int num = 0;
    int flag = 0;
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i = 0;i < completion.size(); i++){
        name = participant[i];
        if(participant[i] != completion[i]){
            answer = participant[i];
            flag = 1;
            break;
        }
        
    }
    if (flag ==0)
        answer = participant[participant.size()-1];
    return answer;
}