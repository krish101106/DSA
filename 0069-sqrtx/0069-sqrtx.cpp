class Solution {
public:
    int mySqrt(int x) {
        
        int s{0};
        int e=x;
        long long int mid{-1};
        int ans{-1};


        while(s<=e){
            mid=s+((e-s)/2);
            if((mid*mid)<=x){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }

        return ans;
        
    }
};