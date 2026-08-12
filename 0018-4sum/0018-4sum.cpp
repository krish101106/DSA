class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;

        for (int i = 0; i < n - 3; i++) {
            // skip duplicate i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // early pruning: smallest possible sum from i is too big
            if ((long)nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;
            // smallest possible sum with this i is still too small even with largest 3 → skip to next i
            if ((long)nums[i] + nums[n-3] + nums[n-2] + nums[n-1] < target) continue;

            for (int j = i + 1; j < n - 2; j++) {
                // skip duplicate j
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                // same pruning at the j level
                if ((long)nums[i] + nums[j] + nums[j+1] + nums[j+2] > target) break;
                if ((long)nums[i] + nums[j] + nums[n-2] + nums[n-1] < target) continue;

                int left = j + 1, right = n - 1;
                long remTarget = (long)target - nums[i] - nums[j];

                while (left < right) {
                    long sum = (long)nums[left] + nums[right];

                    if (sum == remTarget) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                        while (left < right && nums[left] == nums[left - 1]) left++;
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    } else if (sum < remTarget) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }

        return res;
    }
};