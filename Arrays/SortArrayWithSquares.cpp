vector<int> Solution::solve(vector<int> &A)
{
  int n = A.size();
  vector<int> v(n, 0);
  int low = 0;
  int high = n - 1;
  for (int i = n - 1; i >= 0; i--)
  {
    if (abs(A[low]) > abs(A[high]))
    {
      v[i] = A[low] * A[low];
      low++;
    }
    else
    {
      v[i] = A[high] * A[high];
      high--;
    }
  }
  return v;
}
