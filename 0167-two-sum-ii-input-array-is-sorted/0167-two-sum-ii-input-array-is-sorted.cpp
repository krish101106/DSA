class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int s{0}, e= nums.size()-1;
        vector<int> result;

        while(s<e){
            if((nums[s]+nums[e]) == t){
                result.push_back(s+1);
                result.push_back(e+1);
                return result;
            }else if((nums[s]+nums[e])>t){
                e--;
            }else{
                s++;
            }

            
                
        }

        return result;
    }
};