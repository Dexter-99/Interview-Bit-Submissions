
int Solution::maxSubArray(const vector<int> &A)
{
  int max_sum = A[0];
  int curr_sum = A[0];
  for (int i = 1; i < A.size(); i++)
  {
    curr_sum = max(A[i], curr_sum + A[i]);
    max_sum = max(max_sum, curr_sum);
  }
  return max_sum;
}
