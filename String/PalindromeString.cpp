int Solution::isPalindrome(string A)
{
  int i = 0, j = A.size() - 1;
  while (i < j)
  {
    if (!((A[i] >= 'A' && A[i] <= 'Z') || (A[i] >= 'a' && A[i] <= 'z') || (A[i] >= '0' && A[i] <= '9')))
    {
      i++;
    }
    if (!((A[j] >= 'A' && A[j] <= 'Z') || (A[j] >= 'a' && A[j] <= 'z') || (A[j] >= '0' && A[j] <= '9')))
    {
      j--;
    }
    if (((A[i] >= 'A' && A[i] <= 'Z') || (A[i] >= 'a' && A[i] <= 'z') || (A[i] >= '0' && A[i] <= '9')) && ((A[j] >= 'A' && A[j] <= 'Z') || (A[j] >= 'a' && A[j] <= 'z') || (A[j] >= '0' && A[j] <= '9')))
    {
      if (A[i] >= 'A' && A[i] <= 'Z')
      {
        A[i] = (char)(A[i] + 32);
      }
      if (A[j] >= 'A' && A[j] <= 'Z')
      {
        A[j] = (char)(A[j] + 32);
      }
      //   cout<<A[i]<<" "<<A[j]<<endl;
      if (A[i] != A[j])
        return 0;
      i++;
      j--;
    }
  }
  return 1;
}
