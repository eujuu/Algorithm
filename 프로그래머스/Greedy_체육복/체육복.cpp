#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0, i;
    vector<int> total(n+1, 1);
    for(i=0; i < reserve.size(); i++){
        total[reserve[i]]= 2;
    }
    for(i=0; i < lost.size(); i++){
        total[lost[i]] --;;
    }
    i = 1;
    int front =0, back = 0, tmp = 0, tmp1 = 0, tmp2 =0 ;
    while(i < n+1){
        front = i-1;
        back = i+1;
        tmp = total[i];
        if(tmp == 2){
            if(front >=1){
            if(total[front] == 0){
                total[i]--;
                total[front]++;
                i++;
                continue;
            }
            }
            if(back <=n){
            if (total[back] == 0){
                total[i] --;
                total[back]++;
            }
            }
        }
        i++;
    }
    for(i = 1; i  < n+1; i++){
        if(total[i]!=0)
            answer ++;
        cout << total[i] << " ";
    }
    return answer;
}