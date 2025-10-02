class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int num=nums.size();
       sort(nums.begin(),nums.end());
   for(int i=0;i<num;i++)
   {
    if(i==nums[i])
    {
        continue;
    }
    else
    {
        return i;
    }
   }
   if(nums[num-1]!=num) 
   {return num;}
return 0;
    }
};