class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int k=nums[0];

        for(int i=1;i<n;i++){
            k=nums[i]^k;
        }

        return k;
    }
};