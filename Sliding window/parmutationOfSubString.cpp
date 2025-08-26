// Given two strings txt and pat having lowercase letters, the task is to check if any permutation of pat is a substring of txt.
#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    bool isMatch(int arr1[], int arr2[]) {
        for (int i = 0; i < 26; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }
        return true;
    }

    bool search(string& txt, string& pat) {
        // Step 1: Create frequency map for the pattern (Corrected loop)
        int patMap[26] = {0};
        for (int i = 0; i < pat.length(); i++) {
            patMap[pat[i] - 'a']++;
        }

        // Create frequency map for the FIRST window
        int windowMap[26] = {0};
        for (int i = 0; i < pat.length() && i < txt.length(); i++) {
            windowMap[txt[i] - 'a']++;
        }

        // Check the first window
        if (isMatch(patMap, windowMap)) {
            return true;
        }

        // Step 2: Slide the window efficiently across the rest of the text
        // NO inner loop needed here!
        for (int i = pat.length(); i < txt.length(); i++) {
            // Add the new character entering the window from the right
            windowMap[txt[i] - 'a']++;

            // Remove the old character leaving the window from the left
            windowMap[txt[i - pat.length()] - 'a']--;

            // Check if the current window is a match
            if (isMatch(patMap, windowMap)) {
                return true;
            }
        }

        return false;
    }
};