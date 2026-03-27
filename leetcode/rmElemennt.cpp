class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0,e=nums.size();
       
        while(i<e){
            if(nums[i]==val){
                swap(nums[i],nums[e-1]);
                e--;
                
            }
            else{
                
                i++;
            }
            
        }
        return e;
    }
};