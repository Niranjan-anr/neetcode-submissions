class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size(), n=matrix[0].size();
        int left=0, right=n-1;
        int i=0;
        for (i=0; i<m; i++)
        {
            if (matrix[i][0]<=target and matrix[i][n-1]>=target)
            {
                break;
            }

        }
        if (i>=m)
        {
            return false;
        }
        while (left<=right)
        {
            int mid= (left+right)/2;
            if (matrix[i][mid]==target)
            {
                return true;
            }
            else if(matrix[i][mid]>target)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return false;
    }
};
