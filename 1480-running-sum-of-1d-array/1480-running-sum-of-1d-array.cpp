class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size(), i{1};
        vector<int> prefix;
        prefix.push_back(nums[0]);

        while(i<n){
            prefix.push_back(nums[i]+prefix[i-1]);
            i++;
        }

        return prefix;
    }
};