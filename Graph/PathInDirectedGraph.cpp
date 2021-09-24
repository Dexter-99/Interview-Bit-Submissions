void add(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
}
void dfs(vector<int> adj[], int u, vector<bool> &visited)
{
  visited[u] = true;
  for (auto v : adj[u])
  {
    if (visited[v] == false)
    {
      dfs(adj, v, visited);
    }
  }
}
int Solution::solve(int A, vector<vector<int>> &B)
{

  vector<int> adj[A + 1];
  for (int i = 0; i < B.size(); i++)
  {
    add(adj, B[i][0], B[i][1]);
  }

  vector<bool> visited(A + 1, false);
  dfs(adj, 1, visited);
  return visited[A];
}
