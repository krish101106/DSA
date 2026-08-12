class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2]; // initialize with first valid triplet

        for (int i = 0; i < n - 2; i++) {
            // small optimization: skip duplicate i values
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                // update closest if this sum is nearer to target
                if (abs(sum - target) < abs(closestSum - target)) {
                    closestSum = sum;
                }

                if (sum == target) {
                    return sum; // can't get closer than exact match
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return closestSum;
    }
};