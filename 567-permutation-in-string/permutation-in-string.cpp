class Solution {
int comp(map<char,int>&m1, map<char,int>&m2)
{
return m1==m2;

}
public:
    bool checkInclusion(string s1, string s2) {
    if(s1.length()>s2.length()){return 0;}
   map<char,int> a;
   map<char,int> b;
   for(int i=0;i<s1.length();i++)
   {
    a[s1[i]]++; 

   }
   int i=0;
  while(i!=s1.length())
    {
     b[s2[i]]++;
     i++;
     }

     if(comp(a,b))
     {
        return 1;
     }
    while(i!=s2.length())
    {
        int idx=i-s1.length();
        b[s2[idx]]--;
        b[s2[i]]++;
        if (b[s2[i - s1.length()]] == 0)
                b.erase(s2[i - s1.length()]);
        if(comp(a,b)){return 1;};
        i++;


        
    }
    return 0;



    }
};