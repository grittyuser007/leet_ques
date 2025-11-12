class Solution {
public:
    int maxArea(vector<int>& height) {
      int low =0;
      int high=height.size()-1;
      int sz=0;
      while(low<=high)
      {
         if(height[low]>height[high])
         {  int area;
         area=height[high]*(high-low);
            sz=max(sz, area);
           high--; 
         }
         else if(height[low]<height[high])
         {
            int area;
         area=height[low]*(high-low);
            sz=max(sz, area);
           low++;
         }
         else if(height[low]==height[high])
         {
            int area;
            area=height[low]*(high-low);
            sz=max(sz, area);
           low++;
           high--;
         }
      }
      return  sz; 
    }
};