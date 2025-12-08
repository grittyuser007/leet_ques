class Solution {
public:
    bool isValid(string s) {
        
    stack<char> st;

    for(auto ss:s)
    {
        if(!st.empty()){
      if(ss==')' && st.top()=='(')
      {
        st.pop();
        continue;
      }
      else if(ss=='}' && st.top()=='{')
      {
        st.pop();
                continue;

      }
      else if(ss==']' && st.top()=='[')
      {
        st.pop();
                continue;

      }
    }
   st.push(ss);

    }
   
return st.empty();
    }

    
};