/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode *A)
{

  vector<int> list;
  if (A == NULL)
    return list;
  stack<TreeNode *> st;
  TreeNode *curr = A;
  while (!st.empty() || curr != NULL)
  {
    if (curr != NULL)
    {
      st.push(curr);
      curr = curr->left;
    }
    else
    {
      TreeNode *temp = st.top()->right;
      if (temp == NULL)
      {
        temp = st.top();
        st.pop();
        list.push_back(temp->val);
        while (!st.empty() && st.top()->right == temp)
        {
          temp = st.top();

          st.pop();
          list.push_back(temp->val);
        }
      }
      else
      {
        curr = temp;
      }
    }
  }
  return list;
}
