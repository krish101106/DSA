class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), s{0}, e{0}, maxi{0};

        while (e < n) {
            if (nums[e] == 0) {
                maxi = max(maxi, e - s);

                while (nums[e] == 0 && e<n) {
                    e++;
                    if(e==n){
                       
                        return maxi;
                    }
                }

                s = e;
            }
            e++;
        }

        maxi= max(maxi, e-s);
        return maxi;
    }
};