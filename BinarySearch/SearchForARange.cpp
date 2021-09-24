
int first(const vector<int> &A, int B)
{
  int res = -1;
  int lo = 0, hi = A.size() - 1;
  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
    if (A[mid] == B)
    {
      res = mid;
      hi = mid - 1;
    }
    else if (A[mid] > B)
    {
      hi = mid - 1;
    }
    else
    {
      lo = mid + 1;
    }
  }
  return res;
}
int second(const vector<int> &A, int B)
{
  int res = -1;
  int lo = 0, hi = A.size() - 1;
  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
    if (A[mid] == B)
    {
      res = mid;
      lo = mid + 1;
    }
    else if (A[mid] > B)
    {
      hi = mid - 1;
    }
    else
    {
      lo = mid + 1;
    }
  }
  return res;
}

vector<int> Solution::searchRange(const vector<int> &A, int B)
{

  vector<int> ans(2);
  ans[0] = first(A, B);
  ans[1] = second(A, B);
  return ans;
}
