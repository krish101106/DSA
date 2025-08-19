class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        //reverse the entier array

        int s=0,e=n-1;
        while(s<e){
            swap(nums[s++],nums[e--]);
        }

        //reverse first k characters

        s=0,e=k-1;
        while(s<e && e<n){
            swap(nums[s++],nums[e--]);
        }

        //reverse remaining ele

        s=k,e=n-1;

        while(s<e){
            swap(nums[s++],nums[e--]);
        }
       
    }
};