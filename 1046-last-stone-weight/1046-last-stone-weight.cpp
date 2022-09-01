class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q; 
        for(int i = 0; i < stones.size(); i++)
        {
            q.push(stones[i]);
        }
        while(q.size() > 1)
        {
            int x = q.top(); q.pop();
            int y = q.top(); q.pop();
            if(x <= y)
            {
                if (x == y)
                {
                    x = 0;
                    y = 0;
                }
                else 
                {
                    y = y - x;
                    x = 0;
                }
                if(y > 0) q.push(y);
            }
            else if(x >= y)
            {
                if (x == y)
                {
                    x = 0;
                    y = 0;
                }
                else 
                {
                    x = x - y;
                    y = 0;
                }
                if(x > 0) q.push(x);
            } 
        }
        if (q.size() == 0) return 0;
        int last = q.top();
        return last;
    }
};