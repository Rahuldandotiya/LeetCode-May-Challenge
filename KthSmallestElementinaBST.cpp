/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count=0;
    int Ksm;
    /*
    void inorder(TreeNode* root,vector<int> &v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    */
    void inorderWM(TreeNode* root, int k){
        if(root==NULL) return;
        inorderWM(root->left,k);
        count++;
        if(count==k){
            Ksm=root->val;
            return;
        }
        inorderWM(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        //vector<int> v;
        //inorder(root,v);
        inorderWM(root,k);
        return Ksm;
    }
};
