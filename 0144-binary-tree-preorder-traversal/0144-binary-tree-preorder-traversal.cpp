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
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector <int> pre;

        TreeNode* curr = root;

        while(curr != nullptr)
        {
            // case1
            if(curr -> left == nullptr)
            {
                pre.push_back(curr -> val);

                curr = curr -> right;
            }

            else
            {
                TreeNode* prev = curr -> left;
      // before moving left and till connection not found do the following tasks
                while(prev -> right && prev -> right != curr)
                    prev = prev -> right; // move to rightmost in left subtree

                if(prev -> right == nullptr) // not connected already
                {
                    prev -> right = curr; 
                    
                    pre.push_back(curr -> val);// make connection

                    curr = curr -> left; // move to left
                }

                else // already have connection ---> already vis left
                {
                    prev -> right = nullptr; // break connection

                    

                    curr = curr -> right;// move right
                }
            }
        }

        return pre;
        
    }
};