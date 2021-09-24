/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode *A, int B)
{
  if (A == NULL)
    return -1;
  ListNode *slow = A, *fast = A;
  int count = 1;
  while (fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;
    count++;
  }
  ListNode *ans = A;

  if (B >= count)
    return -1;
  count -= B;

  // cout<<count<<endl;
  while (count-- > 1)
  {
    ans = ans->next;
  }
  return ans->val;
}
