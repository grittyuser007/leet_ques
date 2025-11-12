class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> ss;

        int cnt=0;
        int start=0;
       for(int i=0;i<s.length();i++)
       {
        char c=s[i];
        if(ss.count(c) && ss[c]>=start)
        {
            start=1+ss[c];
        }
        ss[c]=i;
        cnt=max(cnt,i-start+1);
       }
        return cnt;
    }
};