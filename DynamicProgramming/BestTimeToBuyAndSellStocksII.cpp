int Solution::maxProfit(const vector<int> &A)
{
  int buy = 0, sell = 0, n = A.size();
  int profit = 0;
  if (n == 0)
    return profit;
  for (int i = 1; i < n; i++)
  {
    if (A[i] >= A[i - 1])
    {
      sell = i;
    }
    else
    {
      profit += A[sell] - A[buy];
      sell = i;
      buy = i;
    }
  }
  profit += A[sell] - A[buy];
  return profit;
}
