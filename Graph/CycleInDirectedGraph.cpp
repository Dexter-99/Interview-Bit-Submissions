void addEdge(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
}
bool bfs(vector<int> adj[], vector<int> &inorder, int A)
{
  queue<int> q;
  for (int i = 1; i <= A; i++)
  {
    if (inorder[i] == 0)
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
      inorder[v]--;
      if (inorder[v] == 0)
      {
        q.push(v);
      }
    }
  }
  return count == A;
}
int Solution::solve(int A, vector<vector<int>> &B)
{

  vector<int> adj[A + 1];
  vector<int> indegree(A + 1, 0);
  int n = B.size();
  for (int i = 0; i < n; i++)
  {
    addEdge(adj, B[i][0], B[i][1]);

    indegree[B[i][1]]++;
  }
  bool res = bfs(adj, indegree, A);
  if (res)
    return 0;
  return 1;
}
