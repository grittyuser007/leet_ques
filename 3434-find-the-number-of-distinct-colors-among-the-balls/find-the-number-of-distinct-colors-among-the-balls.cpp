class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> mep; 
        unordered_map<int, int> freq;
        vector<int> distinct; 
        int unique_count = 0; 
        
        for (auto& query : queries) {
            int key = query[0], value = query[1];

            if (mep.find(key) != mep.end()) {
                int old_value = mep[key];
                freq[old_value]--;
                if (freq[old_value] == 0) {
                    unique_count--;
                }
            }

            mep[key] = value;
            if (freq[value] == 0) {
                unique_count++;
            }
            freq[value]++;
            
            distinct.push_back(unique_count);
        }
        
        return distinct;
    }
};
