vector<int> Solution::allFactors(int A)
{
  vector<int> list;
  for (int i = 1; i <= sqrt(A); i++)
  {
    if (A % i == 0)
    {
      list.push_back(i);
    }
  }
  sort(list.begin(), list.end());
  return list;
}
