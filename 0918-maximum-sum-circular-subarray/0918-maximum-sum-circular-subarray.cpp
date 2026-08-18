class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size(), i{0};
        int maxi=INT_MIN, s1{0}, mini=INT_MAX, s2{0};
        int sum=0;

        while(i<n){
            s1=max(s1+nums[i], nums[i]);
            s2=min(s2+nums[i], nums[i]);

            sum+=nums[i];
            
            mini=min(s2, mini);
            maxi=max(s1, maxi);
            i++;
        }
        if(sum==mini){
            return maxi;
        }
        maxi=max(maxi, (sum - mini));

        return maxi;

    }
};