/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::removeNthFromEnd(ListNode *A, int B)
{

  ListNode *curr = A;
  while (B-- > 1 && curr != NULL)
  {
    curr = curr->next;
  }
  if (curr == NULL)
  {
    return A->next;
  }
  ListNode *prev = NULL;
  ListNode *node = A;
  while (curr->next)
  {
    prev = node;
    node = node->next;
    curr = curr->next;
  }
  if (prev == NULL)
    return A->next;
  prev->next = node->next;
  return A;
}
