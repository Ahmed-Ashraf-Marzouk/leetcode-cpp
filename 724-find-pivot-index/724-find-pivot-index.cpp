class Solution {
public:
    int pivotIndex(vector<int>& nums) {
 
        // running sum  
        nums.insert(nums.begin(), 0);
        for(auto i = nums.begin()+1; i < nums.end(); i++)
        {
            *i = *i + *(i - 1);
            // cout << *i << endl;
        }   
        
        // find the index 
        int idx = 0;
        int f = 0; // flag to check if index is reached
        for(auto i = (nums.begin()+1); i < nums.end(); i++)
        {
            int val = *(nums.end()-1) - *i;
            if (val == *(i-1))
            {
                f = 1;
                break;
            }
            idx++;
        }
        if (f) return idx; else return -1; 
    }
};