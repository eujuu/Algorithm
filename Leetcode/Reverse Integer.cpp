class Solution {
public:
    int reverse(int x) {
        int flag =1;
        if(x < 0) {
            flag= -1;
            if(x== -2147483648) return 0;
            x = x* -1;}
        string str = to_string(x);
        std::reverse(str.begin(), str.end());
        double check = stod(str);
        if(check> (pow(2, 31)-1))
            return 0;
        
        return (flag * stoi(str));
    }
};