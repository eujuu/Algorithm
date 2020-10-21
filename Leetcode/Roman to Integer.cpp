class Solution {
public:
    int conversion(char c){
        int  result;
        if(c== 'I')result=1;
        else if(c=='V')result=5;
        else if(c=='X')result=10;
        else if(c=='L')result=50;
        else if(c=='C')result=100;
        else if(c=='D')result=500;
        else if(c=='M')result=1000;


        return result;

    }
    int romanToInt(string s) {
        int answer=0;
        int i=0;
        while(i<s.length()){
            int first = conversion(s[i]);
            if(i!=s.length()-1){  
                int second= conversion(s[i+1]);
                if(first <second){
                    answer +=(second-first);
                    i+=2;
                    continue;
                }
            }
            answer+=first;
            i+=1;
        }
        

        return answer;
    }
};