class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

  
    vector<pair<int, int>> indexed; 
    for (int i = 0; i < nums.size(); i++) {
        indexed.push_back({nums[i], i});
    }
    sort(indexed.begin(), indexed.end());
    
    int s = 0, e = indexed.size() - 1;
    while (s < e) {
        int sum = indexed[s].first + indexed[e].first;
        if (sum == target) {
            return {indexed[s].second, indexed[e].second};
        } else if (sum < target) {
            s++;
        } else {
            e--;
        }
    }
    return {};
}
};