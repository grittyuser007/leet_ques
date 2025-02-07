class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int> mep;
     
       int x=0;
       vector<int> v;
       if(nums.size()==1){return v;}
       for(int i=0;i<nums.size();i++)
       {
        if(mep.count(nums[i])>0)
        { v.push_back(nums[i]);
        x++;
        }

        mep[nums[i]]++;
        

       }
       
       return v;
       
    }
};