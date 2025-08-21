class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s,i,e;
        s=i=0,e=nums.size()-1;

    while(i<=e){
        if(nums[i]==0){
            swap(nums[s],nums[i]);
            s++,i++;
        }
        else if(nums[i]==1){
            i++;
        }
        else{
            swap(nums[i],nums[e]);
                e--;
            
        }

    }
    }
};