int Solution::search(const vector<int> &A, int B)
{
  int lo = 0, hi = A.size() - 1;
  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
    if (A[mid] == B)
      return mid;

    if (A[0] <= A[mid])
    {
      if (A[0] <= B && B <= A[mid])
      {
        hi = mid - 1;
      }
      else
      {
        lo = mid + 1;
      }
    }
    else
    {
      if (A[mid] <= B && B <= A[hi])
      {
        lo = mid + 1;
      }
      else
      {
        hi = mid - 1;
      }
    }
  }
  return -1;
}
