int Solution::repeatedNumber(const vector<int> &A)
{
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  int num1 = INT32_MIN, num2 = INT32_MIN, count1 = 0, count2 = 0;
  int n = A.size();
  for (int i = 0; i < n; i++)
  {
    if (num1 == A[i])
    {
      count1++;
    }
    else if (num2 == A[i])
    {
      count2++;
    }
    else if (count1 == 0)
    {
      num1 = A[i];
      count1 = 1;
    }
    else if (count2 == 0)
    {
      num2 = A[i];
      count2 = 1;
    }
    else
    {
      count1--;
      count2--;
    }
  }
  count1 = 0;
  count2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (A[i] == num1)
      count1++;
    if (A[i] == num2)
      count2++;
  }
  if (count1 > (n / 3))
    return num1;
  if (count2 > (n / 3))
    return num2;
  return -1;
}
