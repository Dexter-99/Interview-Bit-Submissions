int Solution::solve(int A, int B, int C)
{
  int val = (C + A - 1) % B;
  if (val == 0)
    return B;
  return val;
}
