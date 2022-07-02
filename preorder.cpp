//递归

class Solution {
public:
    void preorder(TreeNode* root, vector<int> &res){  //引用res改变自身的值
        if(root == nullptr) {
            return;
        }
        res.push_back(root -> val);
        preorder(root -> left, res);
        preorder(root -> right, res);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder(root, res);
        return res;
    }


};
