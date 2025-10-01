#include<algorithm>
#include<string>
class Solution {
public:
    int beautySum(string s) {
       int sum=0;
      int n=s.length();
       for(int i=0;i<n;i++)
       {
        unordered_map<char,int> ma;
        for(int j=i;j<n;j++)
        {
            ma[s[j]]++;
            int mx=INT_MIN;
            int mn=INT_MAX;

            for(auto c:ma)
            {
                mx=max(mx,c.second);
                mn=min(mn,c.second);
            }
            sum+=(mx-mn);
        }      
       }
return sum;
    }
};