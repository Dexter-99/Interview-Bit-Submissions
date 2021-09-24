

int Solution::pow(int x, int n, int d)
{

  if (x == 0)
    return 0;
  if (n == 0)
    return 1;
  long long res = 1;
  long long a = x;
  a %= d;
  while (n > 0)
  {
    if (n & 1)
    {
      res = (res * a) % d;
    }
    if (res < 0)
    {
      res += d;
    }
    a = (a * a) % d;
    n >>= 1;
  }

  return res;
}
