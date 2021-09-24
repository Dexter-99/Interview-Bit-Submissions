vector<int> Solution::solve(vector<int> &A, int B)
{
  vector<int> list;
  if (A.size() == 0)
    return list;
  priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.begin() + B);
  for (int i = B; i < A.size(); i++)
  {
    if (A[i] > pq.top())
    {
      pq.pop();
      pq.push(A[i]);
    }
  }
  while (!pq.empty())
  {
    list.push_back(pq.top());
    pq.pop();
  }
  return list;
}
