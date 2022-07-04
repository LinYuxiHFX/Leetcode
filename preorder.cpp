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

//迭代
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stk;
        TreeNode* node = root;
        if(root == nullptr) return res;
        while(node != nullptr || !stk.empty()){ //节点非空注意方法
            while(node != nullptr){
                res.push_back(node -> val);
                stk.push(node);
                node = node -> left;
            }
            node = stk.top();   //C++pop不能一边弹出一边记录，先记录后弹出
            stk.pop();
            node = node -> right;
        }
        return res;
    }
};

二叉树的遍历，三种基础遍历都是利用了stack的思想，在入栈的时候采用不同的入栈方式，出栈的时候实现遍历顺序
