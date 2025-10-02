class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int cnt=0;
      int nt=0;
      int i=0;
      
      while(i<nums.size())
      {
        if(nums[i]==1)
        {
            nt++;
            i++;
        }
        else
        {
            cnt=max(cnt,nt);
            nt=0;
            i++;
        }
      } 
      cnt=max(cnt,nt);
      return cnt; 
    }
};