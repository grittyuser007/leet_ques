class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        long int good=0;
        unordered_map<int ,int> mep;

        for(int i=0;i<nums.size();i++)
        {
          good+=mep[nums[i]-i];
          mep[nums[i]-i]++;

            
        }
        
        return (nums.size()*(nums.size()-1))/2 - good;
        
    }
};