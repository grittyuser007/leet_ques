class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      
      map<int,int> mep;
       unordered_set<int> sez;
       for(int i=0;i<arr.size();i++)
       {
        mep[arr[i]]++;
        
       }
       for (auto ar : mep)
       {
        sez.insert(ar.second);
       
       }
       return mep.size()==sez.size();
    }
    
       

};