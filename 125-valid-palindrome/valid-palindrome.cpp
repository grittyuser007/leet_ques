#include<cctype>
char tolow(char c){
     char temp;
    if(c >= 'a'&& c <='z'){ return c;}
    else{ temp=c -'A'+'a';}
    return temp;
}
class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int ed= s.length()-1;
while(st<=ed)
{
    if(!isalnum(s[st]) || !isalnum(s[ed]))
    {
        if(!isalnum(s[st])){st++;continue;}
        else{ed--;continue;}

    }
    else if(tolow(s[st])!= tolow(s[ed]))
    {
        return 0;
    }
    else 
    { st++;
    ed--;
        continue;
    }
    
}return 1;
    }   

    
};