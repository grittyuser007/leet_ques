class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int num1=0;
    int num2=0;

    for(int i=0;i<nums.size();i++)
    {
        num1=num1^(i+1);
        num2=num2^nums[i];
    }
    return num1^num2;
    
    }
};