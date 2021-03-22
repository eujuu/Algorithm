#include <string>
#include <vector>
#include <iostream>
using namespace std;
int solution(int num) {
    int answer = 0;
    int cnt = 0;
    int num_tmp = num;
    while(true){
        if(cnt == 500) {
            answer = -1;
            break;
        }
        if(num_tmp== 1){
            answer = cnt;
             break;
        }
        
        if(num_tmp %2 == 0){
            num_tmp = num_tmp/ 2;
        }
        else if (num_tmp %2 == 1){
            num_tmp  = num_tmp*3 +1;
            
        }
        cnt++;
    }
    return answer;
}