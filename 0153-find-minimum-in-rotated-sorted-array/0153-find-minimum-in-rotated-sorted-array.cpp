class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int low{0}, mid{0};
        int high=n-1;

        while(low<high){
            mid= low+((high-low)/2);

            if(nums[mid]>nums[high]){
                low=mid+1;
            }else{
                high=mid;
            }

        }
        mid= low+((high-low)/2);



        return nums[mid];
    }
};