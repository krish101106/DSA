class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size(), i{1};
        vector<int> prefix;

        prefix.push_back(gain[0]);

        while(i<n){
            prefix.push_back(prefix[i-1]+gain[i]);
            i++;
        }

        int maxi=INT_MIN;

        for(int i=0; i<n; i++){
            if(prefix[i]>maxi){
                maxi=prefix[i];
            }
        }

        return (maxi>0)?maxi:0;

    }
};