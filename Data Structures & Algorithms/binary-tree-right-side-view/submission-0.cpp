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
    void printRightView(TreeNode* root, int level, vector<int>& rightSideView) {
        if (root == nullptr) {
            return;
        }

        if (level == rightSideView.size()) {
            rightSideView.push_back(root->val);
        }

        printRightView(root->right, level + 1, rightSideView);
        printRightView(root->left, level + 1, rightSideView);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightSideView;

        printRightView(root, 0, rightSideView);

        return rightSideView;
    }
};

