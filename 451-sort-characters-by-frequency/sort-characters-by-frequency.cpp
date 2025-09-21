class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        string re;
        for(auto c:s)
        {
            mp[c]++;
        }
        vector<pair<char,int>> ss(mp.begin(),mp.end());
       sort(ss.begin(), ss.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        string a;
        for(auto c:ss)
        {
            a.append(string(c.second,c.first));
        }
        return a;



    }
};