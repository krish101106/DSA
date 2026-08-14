class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i{1}, result= nums[0];

        while(i<nums.size()){
            result= result ^ nums[i]; 
            i++;
        } 

        return result;
    }
};