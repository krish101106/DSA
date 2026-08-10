class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n=nums.size();

        if(n==1)    return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;

        int s{1}, mid{0};
        int e=n-2;

        while(s<=e){

            mid = s+ ((e-s)/2);
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                // mid is the peak
                return mid;
            }else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
                //mid is in the increasing curve
                s= mid+1;
            }else{
                // nums[mid]>nums[mid+1] && nums[mid]<nums[mid-1]
                // mid is in the deacresing curve

                e= mid-1;
            }
        }

        return -1;
        
    }
};