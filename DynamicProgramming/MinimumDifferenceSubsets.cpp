int helper(vector<int> &A)
{
  int n = A.size();
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += A[i];
  }
  int range = sum / 2;
  bool dp[n + 1][range + 1];
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= range; j++)
    {
      if (i == 0)
      {
        dp[i][j] = false;
        if (j == 0)
          dp[i][j] = true;
      }
      else if (j == 0)
      {
        dp[i][j] = true;
      }
      else
      {
        if (A[i - 1] <= j)
        {
          dp[i][j] = dp[i - 1][j - A[i - 1]] || dp[i - 1][j];
        }
        else
        {
          dp[i][j] = dp[i - 1][j];
        }
      }
    }
  }
  for (int i = range; i >= 0; i--)
  {
    if (dp[n][i])
    {
      return sum - 2 * i;
    }
  }
  return -1;
}
int Solution::solve(vector<int> &A)
{

  return helper(A);
}
