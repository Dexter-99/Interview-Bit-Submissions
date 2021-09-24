int Solution::solve(vector<int> &A, int B)
{
  int low = 0, high = A.size() - 1;
  int res = -1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (A[mid] <= B)
    {
      res = mid;
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return res + 1;
}
