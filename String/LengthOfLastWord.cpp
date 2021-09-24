int Solution::lengthOfLastWord(const string A)
{

  stringstream ss(A);
  string str;
  int len = 0;
  while (ss >> str)
  {
    len = str.length();
  }
  return len;
}