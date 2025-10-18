class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;
vector<int> s(nums.size());
        for(auto a:nums)
        {
            if(a>=0)
            {
                s[pos]=a;
                pos+=2;
            }
            else
            {
                s[neg]=a;
                neg+=2;
            }
        }
        return s;
    }
};