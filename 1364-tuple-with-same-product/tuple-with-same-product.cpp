class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
     int count=0;
     
     int lens=nums.size();
    map<int, int> order;
     for(int i=0;i<lens-1;i++)
    {
        for(int j=i+1;j<lens;j++)
        {
            int product=nums[i]*nums[j];
          count += 8* order[product];
            order[product]++;

        }



        }

     return count; 
    }
};