class Solution {
public:
    bool isPalindrome(int x) {
        if( x< 0)return false;
        string  str=to_string(x);
        string  org =str;
        std::reverse(str.begin(),str.end());
        if(org==str)
            return true;
        return false;
    }
};