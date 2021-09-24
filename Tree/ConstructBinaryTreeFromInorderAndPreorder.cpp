/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode *solve(vector<int> &ino, vector<int> &pre, int inStart, int inEnd, int &idx, unordered_map<int, int> &mp)
{
  if (inStart > inEnd)
  {
    return NULL;
  }

  TreeNode *root = new TreeNode(pre[idx++]);
  int mid = mp[root->val];
  root->left = solve(ino, pre, inStart, mid - 1, idx, mp);
  root->right = solve(ino, pre, mid + 1, inEnd, idx, mp);
  return root;
}
TreeNode *Solution::buildTree(vector<int> &A, vector<int> &B)
{
  int i = 0;
  unordered_map<int, int> mp;
  for (int i = 0; i < B.size(); i++)
  {
    mp[B[i]] = i;
  }
  return solve(B, A, 0, B.size() - 1, i, mp);
}