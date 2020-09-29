#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack <int> st;
    int size = board.size(), into;
    for(int i=0; i < moves.size(); i++){
        int turn = moves[i] -1;
        for(int j = 0; j <size; j++){
            into = board[j][turn];
            if( into != 0){
                board[j][turn] = 0;
                if(!st.empty() && into == st.top()){
                    answer+=2;
                    st.pop();
                }
                else{
                    st.push(into);
                }
                break;
            }
        }
        
    }
    return answer;
}