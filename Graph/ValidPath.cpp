void dfs(vector<vector<int>> &grid, int i, int j, int m, int n)
{
  if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == 1 || grid[i][j] == 2)
    return;
  grid[i][j] = 2;
  dfs(grid, i + 1, j, m, n);
  dfs(grid, i + 1, j + 1, m, n);
  dfs(grid, i + 1, j - 1, m, n);
  dfs(grid, i - 1, j, m, n);
  dfs(grid, i - 1, j + 1, m, n);
  dfs(grid, i - 1, j - 1, mtemp, n);
  dfs(grid, i, j + 1, m, n);
  dfs(grid, i, j - 1, m, n);
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F)
{

  vector<vector<int>> visited(A + 1, vector<int>(B + 1, 0));
  for (int i = 0; i <= A; i++)
  {
    for (int j = 0; j <= B; j++)
    {
      for (int k = 0; k < C; k++)
      {
        if ((E[k] - i) * (E[k] - i) + (F[k] - j) * (F[k] - j) <= D * D)
        {
          visited[i][j] = 1;
          break;
        }
      }
    }
  }
  if (visited[0][0] == 1 || visited[A][B] == 1)
    return "NO";
  dfs(visited, 0, 0, A + 1, B + 1);
  if (visited[A][B] == 2)
    return "YES";
  return "NO";
}
