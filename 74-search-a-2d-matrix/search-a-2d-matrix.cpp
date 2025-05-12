class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int low=0;
       int row=matrix.size();
       int col=matrix[0].size();

    int high=(row*col) -1 ;
    int mid=low+(high-low)/2;
    while(low<=high)
    { 
        if(matrix[mid/col][mid%col]==target)
        {
            return 1;
        }
        else if(matrix[mid/col][mid%col]<target)
        {
         low=mid+1;
        }
        else
         {
              high=mid-1;
        }
        mid=low+(high-low)/2;
    }

return 0;
    }
};