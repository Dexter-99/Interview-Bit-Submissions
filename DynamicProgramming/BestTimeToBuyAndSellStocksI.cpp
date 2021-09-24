int Solution::maxProfit(const vector<int> &A)
{
  int n = A.size();
  int currMax = 0;
  if (n < 1)
    return currMax;
  int currMin = A[0];
  for (int i = 0; i < n; i++)
  {
    currMax = max(currMax, A[i] - currMin);
    currMin = min(A[i], currMin);
  }
  return currMax;
}
