class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        int prd=1;
        for(int i=0;i<nums.size();i++){
            prd=1;
            for(int j=0;j<nums.size();j++){
                if(j==i)
                continue;
                else
                prd=prd*nums[j];
        }
        res.push_back(prd);
    }
    return res;
    }
};
