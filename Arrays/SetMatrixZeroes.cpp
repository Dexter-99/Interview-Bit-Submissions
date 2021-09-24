void Solution::setZeroes(vector<vector<int>> &mat)
{
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  int m = mat.size();
  int n = mat[0].size();
  int col = 1;
  for (int i = 0; i < m; i++)
  {
    if (mat[i][0] == 0)
      col = 0;
    for (int j = 1; j < n; j++)
    {
      if (mat[i][j] == 0)
      {
        mat[i][0] = 0;
        mat[0][j] = 0;
      }
    }
  }
  for (int i = m - 1; i >= 0; i--)
  {
    for (int j = n - 1; j >= 1; j--)
    {
      if (mat[i][0] == 0 || mat[0][j] == 0)
      {
        mat[i][j] = 0;
      }
    }
    if (col == 0)
      mat[i][0] = 0;
  }
}
