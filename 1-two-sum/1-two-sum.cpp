class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> v; 
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(hash.find(target-nums[i]) != hash.end())
            {
                v.push_back(i);
                v.push_back(hash[target-nums[i]]);
                cout << i << hash[target-nums[i]]; 
                return v;
            }
            hash.insert(pair<int, int>(nums[i], i));
        }
        return v;
    }
};