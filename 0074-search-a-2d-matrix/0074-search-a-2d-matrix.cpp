class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();    // rows
        int n = matrix[0].size(); // cols

        int s{0};
        int m{0};
        int e = r - 1;

        while(s<=e){
            m= s+ ((e-s)/2);

            if(target<matrix[m][0]){
                e=m-1;
            }else{
                s=m+1;
            }
        }

        int row = s - 1;
        if (row < 0) return false; 


        s=0;
        int mid{0};
        e = n - 1;

        while (s <= e) {
            int mid = s + ((e - s) / 2);

            if (target == matrix[row][mid]) {
                return true;
            } else if (target < matrix[row][mid]) {

                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return false;
    }
};