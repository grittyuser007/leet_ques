class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int cnt=0;
      int num;
      num=nums[0];

    for(int i=0;i<nums.size();i++)
    {   
        if(cnt==0 && i>0)
       {
        num=nums[i];
        cnt++;
        continue;
        
        
       }
       if(num==nums[i])
       {
        cnt++;
        
        
        
       }
       else
       {
        cnt--;
       
       }
      
    }
    return num;

    }
};