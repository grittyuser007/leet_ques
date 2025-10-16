class Solution {
public:
    void sortColors(vector<int>& nums) {
    int low,mid,high,sz;
    low=0;
    sz=nums.size();
    high=sz-1;
    mid=0;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
           swap(nums[mid],nums[low]);
           mid++;
           low++;

        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else if(nums[mid]==2)
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    }
};