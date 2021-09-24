string Solution::solve(string A)
{
  stringstream ss(A);
  string str, res = "";
  while (ss >> str)
  {

    res = str + " " + res;
  }
  return res.substr(0, res.length() - 1);
}
