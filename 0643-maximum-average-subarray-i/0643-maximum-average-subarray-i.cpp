class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum{0}, winSum{0};
        int n=nums.size();


        for (int i=0; i<k; i++){
            winSum+=nums[i];
        }
        maxSum=winSum;


        for(int i=k; i<n; i++){
            winSum += nums[i]-nums[i-k];
            maxSum=max(maxSum,winSum);

        }

        double avg= (double)maxSum/k;

        return avg;
    }
};