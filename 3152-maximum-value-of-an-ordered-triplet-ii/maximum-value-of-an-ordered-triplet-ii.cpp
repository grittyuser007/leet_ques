class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int s=nums.size();
        vector< long long> left(s,0);
        int max=0;
        vector< long long> right(s,0);
        for(int i=0;i<s;i++)
        {
            if(nums[i]>max)
            {
                                left[i]=nums[i];
                                max=nums[i];

            }
            else
            {
                left[i]=max;
            }
        }
        max=0;
        for(int i=s-1;i>=0;i--)
        {
            if(nums[i]>max)
            {
                right[i]=nums[i];
                max=nums[i];
            
            }
            else
            {
               
            right[i]=max;

            }
        }
      long long mx=0;
        for(int i=1;i<s-1;i++)
        {   
            
            long long sum=(left[i-1]-nums[i])*right[i+1];
           
            if(sum>mx){ mx=sum;}
           
        }
return mx;

    }
};