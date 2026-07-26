class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i])
                c++;
                if(c>1)
                return true;
            }
        }
        return false;
    }
};