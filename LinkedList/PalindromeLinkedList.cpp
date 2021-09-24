/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *reverse(ListNode *head)
{
  if (head == NULL)
    return NULL;
  ListNode *prev = NULL;
  ListNode *curr = head;
  while (curr)
  {
    ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
int Solution::lPalin(ListNode *A)
{
  ListNode *slow = A, *fast = A;
  while (fast->next && fast->next->next)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  slow->next = reverse(slow->next);
  slow = slow->next;
  ListNode *newHead = A;
  while (slow)
  {
    if (slow->val != newHead->val)
    {
      return 0;
    }
    slow = slow->next;
    newHead = newHead->next;
  }
  return 1;
}
