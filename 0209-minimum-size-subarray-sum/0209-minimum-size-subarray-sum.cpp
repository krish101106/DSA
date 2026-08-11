class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum{0}, minCount=INT_MAX, count{0};
        int s{0},e{0}, n= nums.size();

        while(e<n){
            sum+=nums[e];
            count++;

            while(sum>=target){
                minCount=min(minCount, count);
                sum-=nums[s];
                count--;
                s++;
            }

            e++;
        }

        return minCount == INT_MAX ? 0 : minCount;
    }
};