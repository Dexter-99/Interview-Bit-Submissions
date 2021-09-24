int Solution::isPrime(int A)
{
  if (A < 2)
    return false;
  for (int i = 2; i <= sqrt(A); i++)
  {
    if (A % i == 0)
      return false;
  }
  return true;
}
