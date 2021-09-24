/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode *A)
{
  if (A == NULL)
    return;

  queue<TreeLinkNode *> q;
  q.push(A);
  while (!q.empty())
  {
    int size = q.size();
    TreeLinkNode *prev = NULL;
    for (int i = 0; i < size; i++)
    {
      TreeLinkNode *curr = q.front();
      q.pop();
      if (curr->left)
        q.push(curr->left);
      if (curr->right)
        q.push(curr->right);
      if (prev == NULL)
      {
        prev = curr;
      }
      else
      {
        prev->next = curr;
        prev = curr;
      }
    }
  }
  return;
}
