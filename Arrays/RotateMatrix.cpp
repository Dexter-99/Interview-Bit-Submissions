void Solution::rotate(vector<vector<int>> &A)
{
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  int n = A.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      swap(A[i][j], A[j][i]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    int low = 0, high = n - 1;
    while (low < high)
    {
      swap(A[i][low++], A[i][high--]);
    }
  }
}
