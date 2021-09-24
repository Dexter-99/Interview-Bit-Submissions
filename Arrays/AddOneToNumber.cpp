vector<int> Solution::plusOne(vector<int> &A)
{
  int idx = -1;

  int k;
  // Remove The Leading zeroes
  if (A.size() > 1)
  {
    for (k = 0; k < A.size(); k++)
    {
      if (A[k] != 0)
        break;
    }
  }
  vector<int> list(A.begin() + k, A.end());
  A = list;
  int n = A.size();
  for (int i = 0; i < n; i++)
  {
    if (A[i] != 9)
    {
      idx = i;
    }
  }
  if (idx == -1)
  {
    A[0] = 1;
    for (int i = 1; i < A.size(); i++)
      A[i] = 0;
    A.push_back(0);
  }
  else
  {
    if (idx == n - 1)
      A[idx] += 1;
    else
    {
      A[idx] += 1;
      for (int i = idx + 1; i < n; i++)
        A[i] = 0;
    }
  }

  return A;
}
