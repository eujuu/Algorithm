#include <string>
#include <vector>

using namespace std;
vector<int> sort(vector<int> a){
    int tmp = 0;
    for(int i=0; i < a.size()-1; i++){
        for(int j = i+1; j < a.size(); j++){
            if(a[i]>a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    return a;
}
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector <int> s1 {1, 2, 3, 4, 5};
    vector <int> s2 {2, 1, 2, 3, 2, 4, 2, 5};
    vector <int> s3 {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int count[4] = {0};
    for(int i=0; i < answers.size(); i++){
        if(answers[i] == s1[i % 5]){
            count[1]++;
        }
        if(answers[i] == s2[i % 8])
            count[2]++;
         if(answers[i] == s3[i % 10])
            count[3]++;
    }

    int x = count[1]>count[2] ? (count[1]>count[3] ? count[1] : count[3]) : (count[2]>count[3] ? count[2] : count[3]);
    for(int i=0; i < 4; i++){
        if(x == count[i])
            answer.push_back(i);
    }
    return answer;
}