class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        if (t.empty()) return false; 
        if (t.find(s[0]) == string::npos) return false;
        int index = t.find(s[0]); 
        // int count = 1;
        t.erase(0, index+1);
        for (int i = 1; i < s.size(); i++)
        {
            if (t.find(s[i]) == string::npos) return false;
            int index_2 = t.find(s[i]);
            t.erase(0, index_2+1);
        }
        return true;
        
    }
};