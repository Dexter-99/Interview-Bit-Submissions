void add(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
}
bool bfs(vector<int> adj[], vector<int> &indegree, int A)
{
  queue<int> q;
  for (int i = 1; i <= A; i++)
  {
    if (indegree[i] == 0)
    {
      q.push(i);
    }
  }
  int count = 0;
  while (!q.empty())
  {
    int u = q.front();
    q.pop();
    count++;
    for (auto v : adj[u])
    {
      indegree[v]--;
      if (indegree[v] == 0)
      {
        q.push(v);
      }
    }
  }
  return count == A;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C)
{
  vector<int> adj[A + 1];
  vector<int> indegree(A + 1, 0);
  for (int i = 0; i < B.size(); i++)
  {
    add(adj, B[i], C[i]);
    indegree[C[i]]++;
  }

  return bfs(adj, indegree, A);
}
