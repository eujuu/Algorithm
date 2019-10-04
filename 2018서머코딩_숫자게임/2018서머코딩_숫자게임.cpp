#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,cnt;

vector<int> sorting (vector<int> arr){
    int tmp = 0;
    for(int i=0; i < arr.size()-1; i++){
        for(int j = i +1; j < arr.size(); j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    return arr;
}
int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    //vector<int> b_arr = sorting( B);
    sort(B.begin(), B.end());
    sort(A.begin(), A.end());
    //vector<int> a_arr = sorting(A);
    int tmp = 0;
    for(int i=0 ; i < A.size(); i++){
        int now = A[i];
        for(; tmp <B.size(); tmp++){
            if (now < B[tmp]){
                
                tmp++;
                answer++;
                break;
            }
        }
    }
    return answer;
}