class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int s{0}, e{0}, count=k, curr{0}, maxOnes{0}, n=nums.size();

        while(e<n){
            if(nums[e]==1 || count>0){
                curr++;
                maxOnes= max(maxOnes, curr);

                if(nums[e]==0){
                    count--;
                }
                e++;
            }else{
                if(nums[s]==0){
                    count++;
                    s++;
                    curr--;
                }else{
                    s++;
                    curr--;
                }
            }
        }

        return maxOnes;
    }
};