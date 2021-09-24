int Solution::solve(vector<int> &A, int B)
{
  int total = 0;
  int min_sum = 0;
  int k = A.size() - B;
  for (int i = 0; i < k; i++)
  {
    min_sum += A[i];
    total += A[i];
  }
  int curr_sum = min_sum;
  for (int i = k; i < A.size(); i++)
  {
    total += A[i];
    curr_sum += A[i] - A[i - k];
    min_sum = min(min_sum, curr_sum);
  }

  return total - min_sum;
}
