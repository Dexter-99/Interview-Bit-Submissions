int Solution::minPathSum(vector<vector<int>> &A)
{
  int m = A.size();
  int n = A[0].size();
  int dp[m][n];
  dp[0][0] = A[0][0];
  for (int i = 1; i < m; i++)
  {
    dp[i][0] = A[i][0] + dp[i - 1][0];
  }
  for (int i = 1; i < n; i++)
  {
    dp[0][i] = A[0][i] + dp[0][i - 1];
  }
  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {

      dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + A[i][j];
    }
  }
  return dp[m - 1][n - 1];
}
