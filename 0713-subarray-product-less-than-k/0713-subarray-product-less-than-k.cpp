class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }

        int end{0}, start{0}, n=nums.size(), pro{1}, count{0};

         while(end<n){
            pro*=nums[end];

            while(pro>=k){
                pro/=nums[start];
                start++;
            }

            count += end-start+1;
            end++;
         }

         return count;
    }
};