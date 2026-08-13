class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size(), i{1};
        vector<int> prefix;
        vector<int> suffix(n,0);
        prefix.push_back(nums[0]);
        suffix[n-1]= nums[n-1];

        while(i<n){
            prefix.push_back(nums[i]+prefix[i-1]);
            i++;
        }

        i=n-2;

        while(i>=0){
            suffix[i]=(nums[i]+suffix[i+1]);
            i--;
        }

        for(int i=0; i<n; i++){
            if(suffix[i]==prefix[i]){
                return i;
            }
        }

        return -1;





    }
};