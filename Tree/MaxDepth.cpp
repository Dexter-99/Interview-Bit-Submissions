int Solution::maxDepth(TreeNode *A)
{
  if (A == NULL)
    return 0;
  return max(maxDepth(A->left), maxDepth(A->right)) + 1;
}
