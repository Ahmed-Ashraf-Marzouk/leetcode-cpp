class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
        if (s.size() != t.size()) return false; 
        int l = 0,r = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (l != r) return false; 
            if (s[i] != s[i-1]) l = 1; else l = 0;
            if (t[i] != t[i-1]) r = 1; else r = 0;
            if (t[s.find(s[i])] != t[i]) return false;
            if (s[t.find(t[i])] != s[i]) return false;
        }
        if (l != r) return false; 
        return true;
    }
        
};