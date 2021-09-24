int Solution::canJump(vector<int> &A)
{

  int n = A.size();
  int reach = 0;
  for (int i = 0; i < n; i++)
  {
    if (reach < i)
      return false;

    reach = max(reach, i + A[i]);
  }
  return reach >= n - 1;
}
