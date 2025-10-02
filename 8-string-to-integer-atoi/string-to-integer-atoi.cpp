class Solution {
public:
    int myAtoi(string s) {
     int sign=1;
     int i=0;
     long res=0;

     while(i<s.size() && s[i]==' ') i++;

     if(i==s.size())return 0;

     if(s[i]=='-')
     {
        i++;
        sign=-1;
     }
     else if(s[i]=='+')
     {
sign=1;i++;
     }

     while(isdigit(s[i]) && i<s.size())
     {
        res=res*10+(s[i]-'0');
        i++;

        if(res*sign>INT_MAX)return INT_MAX;
        else if(res*sign<INT_MIN)return INT_MIN;
     }

     return sign*res;
    }
};