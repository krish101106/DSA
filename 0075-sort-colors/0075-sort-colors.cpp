class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i{0},k{0};
        int j=nums.size()-1;

        while(k<=j){

            if(nums[k]==0){
                swap(nums[i],nums[k]);
                i++, k++;
            }
            else if(nums[k]==1){
                
                k++;
            }
            else{
                swap(nums[k], nums[j]);
                j--;
            }

        }
    }
};