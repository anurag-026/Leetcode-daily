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
     void inOrder(TreeNode* root , string& s){
         if(root == NULL) return ;

         // if the follwing condition is true then it is a leaf node
         if(root->left == NULL && root->right == NULL ){
             // now append those leaf nodes to the string and return it 
             
             s += to_string(root->val) + "_";   // to_string to convert int to string
             return;
         }
         
         // else traverse again both right and left
         inOrder(root->left,s);
         inOrder(root->right,s);

     }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1 = "";
        string s2 = "";
        
        inOrder(root1,s1);
        inOrder(root2,s2);
        
        if(s1 == s2 ) return true;

        return false;

    }
};