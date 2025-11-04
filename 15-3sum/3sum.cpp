class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        set<vector<int>> se;
sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {  int j=i+1;
        int k=nums.size()-1;
            while(j<k)
            {
               if(nums[i]+nums[j]+nums[k]==0)
               {
                vector<int> v(3);
                v[0]=nums[i];
                v[1]=nums[j];
                v[2]=nums[k];
                sort(v.begin(),v.end());
                se.insert(v);
                j++;
                k--;

               }
               else if(nums[i]+nums[j]+nums[k]>0)
               {
                k--;


               }
               else if(nums[i]+nums[j]+nums[k]<0)
               {
j++;
               }
            }

        }
       vector<vector<int>> res(se.begin(),se.end());  
       return res;
    }
};