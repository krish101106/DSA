class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int s{0}, e= nums.size()-1;

        while(s<e){
            if((nums[s]%2) != 0){
                swap(nums[s], nums[e]);
                e--;
            }else{
            s++;}
        }

        return nums;
    }
};