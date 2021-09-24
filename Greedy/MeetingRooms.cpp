int Solution::solve(vector<vector<int>> &A)
{
  sort(A.begin(), A.end(), [](vector<int> a, vector<int> b)
       { return a[0] < b[0]; });

  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(A[0][1]);
  for (int i = 1; i < A.size(); i++)
  {
    // cout<<pq.top()<<endl;
    if (A[i][0] >= pq.top())
    {
      pq.pop();
    }
    pq.push(A[i][1]);
  }
  return pq.size();
}
