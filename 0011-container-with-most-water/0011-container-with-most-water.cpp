class Solution {
public:
    int maxArea(vector<int>& height) {
        int s{0}, e=height.size()-1;
        int curr{0}, maxi{0};

        while(s<e){
            int mini = min(height[s], height[e]);

            curr= mini * (e-s);;
            maxi= max(maxi, curr);

            if(height[e]>=height[s]){
                s++;
            }else{
                e--;
            }
        }

        return maxi;
    }
};