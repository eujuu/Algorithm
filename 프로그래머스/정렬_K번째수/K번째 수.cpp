#include <string>
#include <vector>

using namespace std;
vector <int> sort(vector <int> a){
    int tmp;
    for(int i=0; i < a.size()-1; i++){
        for(int j = i+1; j < a.size(); j++){
            if(a[i]> a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    return a;
}
int cal(vector<int>arr, vector<int>target){
    vector<int> tmp;
    int value;
    int begin = target[0];
    int end = target[1];
    int num = target[2];
    for(int i=begin-1; i < end; i++){
        tmp.push_back(arr[i]);
    }    
    tmp = sort(tmp);
    value = tmp[num-1];
    return value;
}
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector <int> tmparr;
    for(int i =0; i < commands.size();i++){
        answer.push_back(cal(array, commands[i]));
    }
    return answer;
}