vector<vector<int>> Solution::solve(int A)
{
  vector<vector<int>> list(A);
  for (int i = 0; i < A; i++)
  {
    list[i].resize(i + 1);
    for (int j = 0; j <= i; j++)
    {
      if (j == 0 || j == i)
      {
        list[i][j] = 1;
      }
      else
      {
        list[i][j] = list[i - 1][j - 1] + list[i - 1][j];
      }
    }
  }
  return list;
}