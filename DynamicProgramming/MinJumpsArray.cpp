int Solution::jump(vector<int> &A)
{

  int n = A.size();
  int l = 0, r = 0, count = 0;
  while (r < n - 1)
  {
    int reach = 0;
    for (int j = l; j <= r; j++)
    {
      reach = max(reach, A[j] + j);
    }
    if (r < l)
      return -1;
    l = r + 1;
    r = reach;
    count++;
  }
  return count;
}
