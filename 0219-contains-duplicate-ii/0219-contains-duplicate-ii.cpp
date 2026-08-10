class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > k) {
                window.erase(nums[i - k - 1]);  // remove element sliding out of window
            }
            if (!window.insert(nums[i]).second) {
                return true;  // insert failed -> value already in window
            }
        }
        
        return false;
    }
};