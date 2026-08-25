class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a;
        vector<vector<string>> result;

        for(string s: strs){
            string temp=s;
            sort(temp.begin(), temp.end());
            a[temp].push_back(s);
        }

        for(const auto& pair: a){
            result.push_back(pair.second);
        }

        return result;

    }
};