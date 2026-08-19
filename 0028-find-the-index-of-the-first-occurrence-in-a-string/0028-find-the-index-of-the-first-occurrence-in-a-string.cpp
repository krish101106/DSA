class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m > n) return -1;

        int i = 0; // current position in haystack
        while (i <= n - m) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) {
                return i; // full match found
            }
            i++; // try next starting position
        }
        return -1;
    }
};