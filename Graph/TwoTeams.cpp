void add(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
bool dfs(vector<int> adj[], int u, vector<int> &color)
{
  if (color[u] == -1)
    color[u] = 0;
  for (auto v : adj[u])
  {
    if (color[v] == -1)
    {
      color[v] = color[u] ^ 1;
      if (dfs(adj, v, color) == false)
        return false;
    }
    else if (color[v] == color[u])
      return false;
  }
  return true;
}
int Solution::solve(int A, vector<vector<int>> &B)
{
  vector<int> adj[A + 1];
  for (int i = 0; i < B.size(); i++)
  {
    add(adj, B[i][0], B[i][1]);
  }
  vector<int> color(A + 1, -1);
  for (int i = 1; i <= A; i++)
  {
    if (color[i] == -1)
    {
      if (dfs(adj, i, color) == false)
        return false;
    }
  }
  return true;
}
