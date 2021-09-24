int Solution::isPalindrome(int A)
{
  if (A < 0)
    return 0;
  int num = A;
  int rev = 0;
  while (num)
  {
    int d = num % 10;
    rev = rev * 10 + d;
    num /= 10;
  }
  return rev == A;
}
