class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int siz=nums.size();
        int tmp;
    
        while(k--){
            tmp =nums[siz-1];
            nums.erase(nums.end()-1);
            nums.insert(nums.begin(),tmp);
        }        

    }
};