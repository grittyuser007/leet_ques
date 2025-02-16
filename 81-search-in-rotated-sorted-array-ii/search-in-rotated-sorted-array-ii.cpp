class Solution {
public:
    bool search(vector<int>& nums, int target) {
     int low=0;
     int high=nums.size()-1;
     int mid=low+(high-low)/2;
     if(nums.size()==1){
        if(target==nums[0]){return true;}
        else{return false;}
     }
     while(low<=high)
          {
if(nums[mid]==target){ return true;}
else if(nums[mid]==nums[low] && nums[mid]==nums[high]){low++; high--;}
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
else 
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
     return false;   
    }
};