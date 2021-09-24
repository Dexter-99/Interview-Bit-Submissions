void solve(vector<int> &A, vector<int> &res, vector<vector<int>> &list, int i)
{
  list.push_back(res);
  if (i == A.size())
  {
    return;
  }
  for (int j = i; j < A.size(); j++)
  {
    if (j > i && A[j] == A[j - 1])
      continue;
    res.push_back(A[j]);
    solve(A, res, list, j + 1);
    res.pop_back();
  }
}
vector<vector<int>> Solution::subsets(vector<int> &A)
{
  vector<vector<int>> list;
  sort(A.begin(), A.end());
  vector<int> res;
  solve(A, res, list, 0);
  return list;
}
