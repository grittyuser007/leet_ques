class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int> s;
       int z=nums2.size();
       vector<int>v(z);
       vector<int> v1;
      for(int i=z-1;i>=0;i--)
      {
         while(!s.empty() && s.top()<=nums2[i])
         {
            s.pop();
         }
         if(s.empty())
         {
            v[i]=-1;
         }
         else
         {
            v[i]=s.top();
         }
         s.push(nums2[i]);
      }

    for(auto c:nums1)
    { int i=0;
      while(c!=nums2[i])
      {
       i++; 
      }
      v1.push_back(v[i]);
    }
return v1;
    }
};