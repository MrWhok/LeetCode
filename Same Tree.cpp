class Solution {
public:
    vector<int>t1,t2;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        __postorder1(p);
        __postorder2(q);

        if(t1.size()!=t2.size())return false;
        for(int i=0;i<t1.size();i++){
            if(t1[i]!=t2[i])return false;
        }
        return true; 
    }
private:
    void __postorder1(TreeNode *root) {
        if (root) {
            __postorder1(root->left);
            __postorder1(root->right);
            t1.push_back(root->val);
        }
        else{
            t1.push_back('x');
        }
    }
    void __postorder2(TreeNode *root) {
        if (root) {
            __postorder2(root->left);
            __postorder2(root->right);
            t2.push_back(root->val);
        }
        else{
            t2.push_back('x');
        }
    }
};
