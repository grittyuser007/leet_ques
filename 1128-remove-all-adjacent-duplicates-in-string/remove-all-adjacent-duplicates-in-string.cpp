class Solution {
public:
    string removeDuplicates(string s) {
        
      stack<char> s1;
      char mem;
      string ss;
      s1.push(s[0]);
      for(int i=1;i<s.length();i++)
      {
       if(!s1.empty() && s[i]==s1.top())
       {
        s1.pop();
       }
       else{
        s1.push(s[i]);
     
       }
      }
      while(!s1.empty())
      {
   ss=s1.top()+ss;
   s1.pop();
      }
      return ss;
    }
};