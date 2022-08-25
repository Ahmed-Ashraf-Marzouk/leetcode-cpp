class Solution {
public:
    int longestPalindrome(string s) {
        int f_l[26] = {0};
        int f_u[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if(isupper(s[i]))
            {
                f_u[s[i] - 'A']++;
            }
            else f_l[s[i] - 'a']++;
        }
        int b_odd = 0;
        int sum = 0;    
        for (int i = 0; i < 26; i++)
        {
            if (f_l[i] != 1)
            {
                sum += f_l[i]%2 != 0 ? f_l[i] - 1 : f_l[i];
            }
            if (f_u[i] != 1)
                sum += f_u[i]%2 != 0 ? f_u[i] - 1 : f_u[i];
            if (f_u[i] %2 != 0 || f_l[i] %2 != 0) b_odd = 1;

        }
        return sum + b_odd;   
    }
};
