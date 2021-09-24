int Solution::repeatedNumber(const vector<int> &A)
{

  int slow = A[0], fast = A[0];
  do
  {
    slow = A[slow];
    fast = A[A[fast]];
  } while (slow != fast);

  int ptr1 = A[0];
  int ptr2 = slow;
  while (ptr1 != ptr2)
  {
    ptr1 = A[ptr1];
    ptr2 = A[ptr2];
  }
  return ptr1;
}
