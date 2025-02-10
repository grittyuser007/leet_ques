class Solution {
public:
    string clearDigits(string s) {
     string stck;
     for(auto as:s)
     {
        if(isdigit(as) && !stck.empty())
        {
            stck.pop_back();

        }
        else
        {
            stck.push_back(as);
        }
     }
   return stck;
    }
};