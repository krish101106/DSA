class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n - 1, mid = 0;

        while (s <= e) {
            mid = s + ((e - s) / 2);

            if (nums[mid] == target) {
                return true;
            }

            if (nums[s] == nums[e] && nums[e] == nums[mid]) {
                s++;
                e--;
                continue;
            }

            if (nums[mid] >= nums[s]) {
                if (target <= nums[mid] && target >= nums[s]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            } else {
                if (target <= nums[e] && target >= nums[mid]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
        }

        return false;
    }
};