int Solution::searchMatrix(vector<vector<int>> &A, int B)
{

  int m = A.size();
  int n = A[0].size();
  int lo = 0, hi = m * n - 1;
  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
    if (A[mid / n][mid % n] == B)
    {
      return 1;
    }
    else if (A[mid / n][mid % n] < B)
    {
      lo = mid + 1;
    }
    else
    {
      hi = mid - 1;
    }
  }
  return 0;
}
