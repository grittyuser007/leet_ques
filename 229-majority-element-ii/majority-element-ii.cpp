class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size()/3; vector<int> v;
       map<int,int> mep;
    for(int i=0;i<nums.size();i++)
    {
    mep[nums[i]]++;
    }
    for (auto m:mep)
    if(m.second >n)
    {
        v.push_back(m.first);
    } return v;
    }
   

};