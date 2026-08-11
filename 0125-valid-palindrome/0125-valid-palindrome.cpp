class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return toupper(c);
        });

        int start = 0, end = s.size() - 1;

        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};