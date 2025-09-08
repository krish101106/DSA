// Given two strings txt and pat having lowercase letters, the task is to check if any permutation of pat is a substring of txt.
#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    bool isMatch(int h1[], int h2[]) {
        for(int i = 0; i < 26; i++) {
            if (h1[i] != h2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        int h1[26] = {0};
        int h2[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            h1[s1[i] - 'a']++;
            h2[s2[i] - 'a']++;
        }

        if (isMatch(h1, h2)) {
            return true;
        }

        int s = 0;
        int e = s1.length();

        while (e < s2.length()) {
            h2[s2[s] - 'a']--;
            h2[s2[e] - 'a']++;
            
            if (isMatch(h1, h2)) {
                return true;
            }
            s++;
            e++;
        }

        return false;
    }
};