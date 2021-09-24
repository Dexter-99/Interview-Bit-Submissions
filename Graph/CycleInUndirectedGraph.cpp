void add(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
bool dfs(vector<int> adj[], int u, int parent, vector<bool> &visited)
{
  visited[u] = true;
  for (auto v : adj[u])
  {
    if (visited[v] == false)
    {
      if (dfs(adj, v, u, visited))
        return true;
    }
    else if (v != parent)
      return true;
  }
  return false;
}
int Solution::solve(int A, vector<vector<int>> &B)
{
  vector<int> adj[A + 1];
  vector<bool> visited(A + 1, false);
  for (int i = 0; i < B.size(); i++)
  {
    add(adj, B[i][0], B[i][1]);
  }
  for (int i = 1; i <= A; i++)
  {
    if (!visited[i])
    {
      if (dfs(adj, i, -1, visited))
        return true;
    }
  }
  return false;
}