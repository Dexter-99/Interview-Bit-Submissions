/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *solve(vector<int> &pos, vector<int> &ino, int postS, int postE, int inoS, int inoE, unordered_map<int, int> &mp)
{
  if (postS > postE || inoS > inoE)
    return NULL;

  TreeNode *root = new TreeNode(pos[postE]);
  int mid = mp[root->val];
  int numsLeft = mid - inoS;
  root->left = solve(pos, ino, postS, postS + numsLeft - 1, inoS, mid - 1, mp);
  root->right = solve(pos, ino, postS + numsLeft, postE - 1, mid + 1, inoE, mp);
  return root;
}
TreeNode *Solution::buildTree(vector<int> &A, vector<int> &B)
{
  unordered_map<int, int> mp;
  for (int i = 0; i < A.size(); i++)
    mp[A[i]] = i;
  return solve(B, A, 0, B.size() - 1, 0, A.size() - 1, mp);
}
