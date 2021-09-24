int Solution::solve(int A, int B)
{

  int total = 0;
  total += min(A - 1, B - 1);
  total += min(A - 1, 8 - B);
  total += min(8 - A, B - 1);
  total += min(8 - A, 8 - B);
  return total;
}
