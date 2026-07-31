class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        vector<int> hash;

        for(int i=0; i<=n;i++){
            hash.push_back(0);
        }

        for(int i=0; i<n;i++){
            hash[nums[i]]=1;
        }

        int k=0, m=hash.size();

        while(k<m){
            if(hash[k]==0){
                return k;
            }
            k++;
        }

        return k;


    }
};