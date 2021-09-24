static bool myCompare(string x, string y)
{
  string s1 = x + y;
  string s2 = y + x;
  return (s1.compare(s2) > 0) ? 1 : 0;
}
string Solution::largestNumber(const vector<int> &A)
{

  vector<string> res;
  for (int i = 0; i < A.size(); i++)
  {
    res.push_back(to_string(A[i]));
  }
  sort(res.begin(), res.end(), myCompare);
  string num = "";
  int n = res.size();
  for (int i = 0; i < n; i++)
  {
    if (num == "0" && res[i] == "0")
      continue;
    num += res[i];
  }
  return num;
}
