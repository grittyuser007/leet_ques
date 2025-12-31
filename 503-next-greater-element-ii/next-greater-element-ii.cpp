class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int z=nums.size();
        vector<int> v(z);
        for(int i=2*z-1;i>=0;i--)
        { 
while(!s.empty() && s.top()<=nums[i%z] )
{
    s.pop();
}
if(i<z)
{
v[i]=s.empty()?-1:s.top();
}
s.push(nums[i%z]);
        }

return v;
    }
};