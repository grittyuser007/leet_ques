class Solution {
public:
    string reverseWords(string s) {
       int sz=s.length();
       int st=0;
       string sam="";
       string word="";
       int ed=sz-1;
       int i=0;
     while(ed>=0)
       {
       if(s[ed]!=' ')
       { 
        word=s[ed]+ word;
        ed--;
       }
       else
       { if(!word.empty())
       {
        sam+=word + " ";
        word="";
       }
       ed--;
        
       }
       }
       if(!word.empty()){   sam+=word + " ";}
       sam.pop_back();

         return sam;

       
     

    }
};