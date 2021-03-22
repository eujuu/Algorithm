#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int tmp =0;
    for(int i=0; i < s.length(); i++){
        if(s[i] != ' '){
            tmp = int(s[i]) + n;
            if(int(s[i])>=97){ // 소문자
                if(int(s[i]) +n >122) //z를 넘은 경우
                    answer += int(s[i])+ n - 26;
                else
                    answer += int(s[i]) + n;
            }
            else { //대문자
                if(int(s[i]) +n >90) //Z를 넘은 경우
                    answer += int(s[i])+ n - 26;
                else
                    answer += int(s[i]) + n;
            }
        }
        else
            answer+= ' ';
        
    }
    return answer;
}