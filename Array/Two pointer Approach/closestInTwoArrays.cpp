#include<vector>
#include <cmath>     // For std::abs
#include <climits>   // For INT_MAX

class Solution {
public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        // --- FIX 1: Use variables to store the result pair ---
        // We will return these values in a vector at the end.
        int result_l = 0;
        int result_r = 0;

        int ptr1 = 0;
        int ptr2 = m - 1;
        int diff = INT_MAX;

        // --- FIX 3: Loop condition should be ptr2 >= 0 ---
        while (ptr1 < n && ptr2 >= 0) {
            int sum = arr[ptr1] + brr[ptr2];

            // Check if this pair is closer to x than the current best
            if (std::abs(sum - x) < diff) {
                result_l = arr[ptr1];
                result_r = brr[ptr2];
                diff = std::abs(sum - x);
            }

            // If the sum is exactly x, we've found the best pair, so we can stop.
            if (sum == x) {
                return {arr[ptr1], brr[ptr2]};
            }
            // --- FIX 2: Correct logic for moving pointers ---
            else if (sum > x) {
                // Sum is too big, need to make it smaller.
                // Move ptr2 to a smaller element in brr.
                ptr2--;
            } else { // This implies sum < x
                // Sum is too small, need to make it bigger.
                // Move ptr1 to a larger element in arr.
                ptr1++;
            }
        }
        
        // --- FIX 4: Removed the redundant and incorrect loops from the end ---

        return {result_l, result_r};
    }
};