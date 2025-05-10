class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int t=row*col;
        vector<int> opt;
     int startrow=0,endrow=row-1;
     int startcol=0,endcol=col-1;

    while(count < t){
        for(int i=startcol;count<t && i<=endcol;i++)
        {
        
            opt.push_back(matrix[startrow][i]);
            count++;
        }
        startrow++;
        for(int i=startrow;count<t && i<=endrow;i++)
        {
                        opt.push_back(matrix[i][endcol]);
count++;
        }
        endcol--;
        for(int i=endcol;count<t && i>=startcol;i--)
        {
                        opt.push_back(matrix[endrow][i]);
count++;
        }
        endrow--;
        for(int i=endrow;count<t && i>=startrow;i--)
        {
                        opt.push_back(matrix[i][startcol]);
                        count++;

        }
      startcol++;


    }
return opt;
    }
};