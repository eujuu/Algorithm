#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    int value = 0;
    vector<int>month{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string>date {"FRI", "SAT","SUN", "MON", "TUE", "WED", "THU"};
    for(int i=0; i <a-1; i++){
        value = (value + month[i]% 7) % 7;
    }
    value =(value+ b % 7 -1)%7;

    answer = date[value];
    return answer;
}