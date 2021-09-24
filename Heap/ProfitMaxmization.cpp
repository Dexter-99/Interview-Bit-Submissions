int Solution::solve(vector<int> &A, int B)
{
  priority_queue<int> pq(A.begin(), A.end());
  int sum = 0;
  while (B--)
  {
    int val = pq.top();
    pq.pop();
    sum += val;
    pq.push(val - 1);
  }
  return sum;
}
 