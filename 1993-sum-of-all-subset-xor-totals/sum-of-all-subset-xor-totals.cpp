class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
int tot=0;
for(int i=0;i<nums.size();i++)

{
  tot =tot | nums[i];
}
return tot* pow(2,(nums.size()-1));


       
        
    }
};