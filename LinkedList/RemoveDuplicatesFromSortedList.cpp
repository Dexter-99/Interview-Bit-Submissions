/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::deleteDuplicates(ListNode *A)
{
  if (A == NULL)
    return A;

  ListNode *prev = NULL, *curr = A;
  while (curr)
  {
    if (prev == NULL)
    {
      prev = curr;
    }
    else
    {
      if (prev->val == curr->val)
      {
        prev->next = curr->next;
      }
      else
      {
        prev = curr;
      }
    }
    curr = curr->next;
  }
  return A;
}
