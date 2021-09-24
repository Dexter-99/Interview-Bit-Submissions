/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode *A)
{
  vector<int> list;
  if (A == NULL)
    return list;
  TreeNode *curr = A;
  stack<TreeNode *> st;
  while (curr != NULL || !st.empty())
  {
    while (curr != NULL)
    {
      st.push(curr);
      curr = curr->left;
    }
    curr = st.top();
    st.pop();
    list.push_back(curr->val);
    curr = curr->right;
  }
  return list;
}
