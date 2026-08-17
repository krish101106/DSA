class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), i{0}, maxi=INT_MIN, sum{0};

        while(i<n){
            sum=max(sum+nums[i], nums[i]);

            maxi=max(sum, maxi);
            i++;
        }

        return maxi;
    }
};