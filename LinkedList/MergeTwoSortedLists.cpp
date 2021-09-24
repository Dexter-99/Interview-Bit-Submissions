/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::mergeTwoLists(ListNode *A, ListNode *B)
{
  ListNode *head = new ListNode(0);
  ListNode *curr = head;
  ListNode *curr1 = A, *curr2 = B;
  while (curr1 != NULL && curr2 != NULL)
  {
    if (curr1->val < curr2->val)
    {
      curr->next = curr1;
      curr1 = curr1->next;
    }
    else
    {
      curr->next = curr2;
      curr2 = curr2->next;
    }
    curr = curr->next;
  }
  curr->next = curr1 ? curr1 : curr2;
  return head->next;
}
