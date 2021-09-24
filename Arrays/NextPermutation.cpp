vector<int> Solution::nextPermutation(vector<int> &A)
{
  int i, j, n;
  n = A.size();
  for (i = n - 2; i >= 0; i--)
  {
    if (A[i] < A[i + 1])
      break;
  }
  if (i < 0)
  {
    reverse(A.begin(), A.end());
  }
  else
  {
    for (j = n - 1; j > i; j--)
    {
      if (A[j] > A[i])
        break;
    }
    swap(A[j], A[i]);
    reverse(A.begin() + i + 1, A.end());
  }
  return A;
}
