class Solution {
public:
    /*
     * THE 3-STEP REVERSAL ALGORITHM
     * Time: O(N) — Every element is swapped exactly twice.
     * Space: O(1) — In-place manipulation, no extra arrays allocated.
     *
     * Core mechanism: Rotating an array is mathematically equivalent to
     * flipping the whole thing backward, then flipping the two resulting
     * chunks back forward to restore their internal order.
     */

    // Standard two-pointer in-place reversal.
    void reverse(vector<int>& nums, int s, int e) {
        while (s < e) {
            swap(nums[s], nums[e]);
            e--;
            s++;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        // CRITICAL GUARD CLAUSE (Missing in your original code)
        // If the array is empty, n = 0. Modulo by 0 throws a runtime crash.
        // If n = 1 or k = 0, no rotation is mathematically needed.
        if (n == 0 || k == 0 || k % n == 0)
            return;

        // Normalization: Strips away redundant full rotations.
        // Rotating a 5-element array by 7 steps is just rotating it by 2.
        k = k % n;

        // Step 1: Reverse the entire array.
        // Example: [1, 2, 3, 4, 5, 6, 7] -> [7, 6, 5, 4, 3, 2, 1]
        // The elements meant for the front (5,6,7) are now there, but
        // backwards.
        reverse(nums, 0, n - 1);

        // Step 2: Reverse the first 'k' elements.
        // Example: [7, 6, 5...] -> [5, 6, 7...]
        // Restores the internal order of the chunk we brought to the front.
        reverse(nums, 0, k - 1);

        // Step 3: Reverse the remaining 'n - k' elements.
        // Example: [...4, 3, 2, 1] -> [...1, 2, 3, 4]
        // Restores the internal order of the chunk we pushed to the back.
        reverse(nums, k, n - 1);
    }
};