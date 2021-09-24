void dfs(vector<vector<char>> &A, int i, int j, int m, int n, bool fill)
{
  if (i < 0 || i == m || j < 0 || j == n || A[i][j] == 'X' || (fill && A[i][j] == 'F'))
    return;
  if (fill)
    A[i][j] = 'F';
  else
    A[i][j] = 'X';

  dfs(A, i + 1, j, m, n, fill);
  dfs(A, i - 1, j, m, n, fill);
  dfs(A, i, j + 1, m, n, fill);
  dfs(A, i, j - 1, m, n, fill);
}
void Solution::solve(vector<vector<char>> &A)
{
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  int m = A.size();
  int n = A[0].size();
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || j == 0 || i == m - 1 || j == n - 1 && A[i][j] == 'O')
      {
        dfs(A, i, j, m, n, true);
      }
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (A[i][j] == 'O')
      {
        dfs(A, i, j, m, n, false);
      }
      else if (A[i][j] == 'F')
      {
        A[i][j] = 'O';
      }
    }
  }
}
