class Solution {
public:
    int search(vector<int>& nums, int target) {
      int low=0;
      int high=nums.size()-1;
      cout<<high;
      int mid=low+(high-low)/2;
      
      while(low<=high)
      {
if(nums[mid]==target){ return mid;}
else if(nums[mid]>=nums[low])
{
    if(target<nums[mid] && target >=nums[low] )
    {
high=mid-1;
    }
    else
    {
low=mid+1;
}
}
else if(nums[mid]<nums[high])
{
    if(nums[mid]<target && nums[high]>=target)
    {
       low=mid+1;
    }
    else
    {
        high=mid-1;
    }
}
mid=low+(high-low)/2;
      } 
      return -1;
    
    }
};