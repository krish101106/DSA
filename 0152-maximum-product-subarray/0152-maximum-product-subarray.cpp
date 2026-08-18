class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(), s1{1}, s2{1}, i{0}, maxi=INT_MIN;

        while(i<n){
            int x=s1;
            int y=s2;


            if(nums[i]<0){
                s1=max(s1*nums[i], nums[i]);
                s1=max(s1, y*nums[i]);

                s2=min(s2*nums[i], nums[i]);
                s2=min(s2, x*nums[i]);
            }else{
                s1=max(s1*nums[i], nums[i]);
                s2=min(s2*nums[i], nums[i]);
            }
            
           

            maxi=max(maxi, s1);
            i++;

        }

        return maxi;
    }
};