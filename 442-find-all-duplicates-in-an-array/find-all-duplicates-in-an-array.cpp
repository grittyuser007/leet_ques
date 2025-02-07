class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> mep(nums.size()+1,0);
     
       vector<int> v;
       if(nums.size()==1){return v;}
       for(int i=0;i<nums.size();i++)
       {
       if(mep[nums[i]]>0)
       {
        v.push_back(nums[i]);
      
       }

        mep[nums[i]]++;
        

       }
      // for(auto ar:mep){ cout<<ar<<endl;}
       
       
       return v;
       
    }
};