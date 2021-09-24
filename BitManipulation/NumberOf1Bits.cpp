int Solution::numSetBits(unsigned int A)
{
  int count = 0;
  while (A)
  {
    A = A & (A - 1);
    count++;
  }
  return count;
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
