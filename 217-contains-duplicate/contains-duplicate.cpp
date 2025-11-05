class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        stack<int> st;
        for(auto s:nums)
        {
            if(st.empty())
            {
                st.push(s);
                continue;

            }
            else if(st.top()==s)
            { 
                return true;
            }
            st.push(s);
            
        }
        return false;
    }
};