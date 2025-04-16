class Solution {
public:
    string removeDuplicates(string s) {
        
      string s1="";

      for(auto c:s)
      {
       if(s1.size() && c==s1.back())
       {
        s1.pop_back();
       }
       else{
        s1.push_back(c);
     
       }
      
      }
       return s1;
    }  
};