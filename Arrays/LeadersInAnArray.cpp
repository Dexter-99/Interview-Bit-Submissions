vector<int> Solution::solve(vector<int> &A)
{

  vector<int> res;
  int n = A.size();
  int curr_ldr = A[n - 1];
  res.push_back(curr_ldr);
  for (int i = n - 2; i >= 0; i--)
  {
    if (A[i] > curr_ldr)
    {
      curr_ldr = A[i];
      res.push_back(curr_ldr);
    }
  }
  return res;
}