vector<string> Solution::fizzBuzz(int A)
{
  vector<string> ans;
  for (int i = 1; i <= A; i++)
  {
    string res = "";
    if (i % 3 == 0)
    {
      res += "Fizz";
    }
    if (i % 5 == 0)
    {
      res += "Buzz";
    }

    if (res == "")
      ans.push_back(to_string(i));
    else
      ans.push_back(res);
  }
  return ans;
}
