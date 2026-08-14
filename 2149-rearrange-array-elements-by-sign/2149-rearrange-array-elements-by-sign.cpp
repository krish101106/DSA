class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size(), i{0};
        vector<int> nums1;
        vector<int> nums2;

        while(i<n){
            if(nums[i]<0){
                nums2.push_back(nums[i]);
            }else{
                nums1.push_back(nums[i]);
            }

            i++;
        }

        i=0;
        int k{0};

        while(i<(n/2)){
            nums[k++]=nums1[i];
            nums[k++]=nums2[i];
            i++;
        }

        return nums;
    }
};