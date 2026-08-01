
class Solution {

    int left(vector<int>& nums, int target){
            int n = nums.size();
            int s = 0, e = n - 1;
            int mid;
            int ans=-1;

            while (s <=e) {
                mid = s + ((e - s) / 2);

                if (nums[mid] == target) {
                    ans=mid;

                    e=mid-1;

                }

                else if (target > nums[mid]) {
                    s = mid + 1;
                }

                else {
                    e = mid - 1;
                }
            }
            return ans;


    }

int right(vector<int>& nums, int target){
        int n = nums.size();
        int s = 0, e = n - 1;
        int mid;
        int ans=-1;

        while (s <=e) {
            mid = s + ((e - s) / 2);

            if (nums[mid] == target) {
                ans=mid;

                s=mid+1;

            }

            else if (target > nums[mid]) {
                s = mid + 1;
            }

            else {
                e = mid - 1;
            }
        }
        return ans;


    }

    public:

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range={-1, -1};

        range[0]=left(nums, target);
        range[1]=right(nums, target);

        return range;
    }
};