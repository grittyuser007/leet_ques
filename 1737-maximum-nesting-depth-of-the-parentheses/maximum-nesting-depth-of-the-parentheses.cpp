#include<algorithm>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        stack<char> vars;
        int ma=0;
        for(auto c:s)
        {   
           if(!vars.empty() && c==')' && vars.top()=='(')
           {int sz=vars.size();
            ma=max(ma,sz);
             vars.pop();
           }  

          else if(c=='(')
          { 
            vars.push(c);
           
          }
        
        }
        return ma;
    }
};