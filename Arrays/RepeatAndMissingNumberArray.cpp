vector<int> Solution::repeatedNumber(const vector<int> &A)
{
  int res = 0;
  for (int i = 0; i < A.size(); i++)
  {
    res ^= A[i] ^ (i + 1);
  }
  int rsb = res & (-res);
  int res1 = 0, res2 = 0;
  for (int i = 0; i < A.size(); i++)
  {
    if ((A[i] & rsb) == 0)
    {
      res1 ^= A[i];
    }
    else
    {
      res2 ^= A[i];
    }
    if (((i + 1) & rsb) == 0)
    {
      res1 ^= (i + 1);
    }
    else
    {
      res2 ^= (i + 1);
    }
  }
  for (int i = 0; i < A.size(); i++)
  {
    if (A[i] == res1)
    {
      return {res1, res2};
    }
  }
  return {res2, res1};
}
