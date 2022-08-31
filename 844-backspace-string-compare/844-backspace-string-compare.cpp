class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk_s;
        int i = 0;
        while(s[i] != '\0'){
            
            if(s[i] == '#' && !stk_s.empty())
                stk_s.pop();
            else if (s[i] != '#')
                stk_s.push(s[i]);
            i++;
        }
        i = 0;
        stack<char> stk_t;
        while(t[i] != '\0'){
            
            if(t[i] == '#' && !stk_t.empty())
                stk_t.pop();
            else if (t[i] != '#')
                stk_t.push(t[i]);
            i++;
        }
        if(stk_s.size() != stk_t.size()){cout <<stk_s.size() << stk_t.size(); return false;}
        while(!stk_s.empty())
        {
            if(stk_s.top() == stk_t.top())
            {
                stk_s.pop(); stk_t.pop();
            }
            else
            {
                return false;
                cout << "JEE:";    
            }
        }
        if(stk_t.empty()) return true; cout <<"SDA"; return false ;
    }
};