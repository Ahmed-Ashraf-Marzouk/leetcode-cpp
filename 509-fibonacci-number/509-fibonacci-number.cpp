class Solution {
public:
    int fib(int n) {
        int fab[n+1];
        if(n == 0 || n == 1) return n;
        fab[0] = 0;
        fab[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            fab[i] = fab[i - 1] + fab[i - 2];
        }
        return fab[n];
    }
};