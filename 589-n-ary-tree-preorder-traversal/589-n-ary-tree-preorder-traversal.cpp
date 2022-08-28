

class Solution {
public:
    
    void help(Node* root, vector<int>& v)
    {
        if(root == NULL) return; 
        v.push_back(root->val); 
        for (auto a:root->children) help(a, v);
        
    }
    vector<int> preorder(Node* root) {
        vector<int> v;
        help(root, v);
        return v; 
       
    }
};