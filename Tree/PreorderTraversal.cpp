/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode *A)
{
  vector<int> list;
  if (A == NULL)
    return list;
  stack<TreeNode *> st;
  st.push(A);
  while (!st.empty())
  {
    TreeNode *curr = st.top();
    st.pop();
    list.push_back(curr->val);
    if (curr->right)
      st.push(curr->right);
    if (curr->left)
      st.push(curr->left);
  }
  return list;
}
