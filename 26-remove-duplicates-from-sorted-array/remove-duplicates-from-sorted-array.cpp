class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> s;
        for(auto c:nums)
        {  if(s.empty()){
            s.push(c);
        }
        else if (s.top()!=c && !s.empty())
        {
            s.push(c);
        }
        else
        {
            continue;
        }
        }
        int siz=s.size();
        int i=siz-1;
       while(!s.empty()){
            nums[i]=s.top();
            s.pop();
            i--;
        }
   return siz;
    }
};