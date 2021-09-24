int Solution::removeElement(vector<int> &A, int B)
{
  int i = 0;
  int j = 0;
  int n = A.size();
  while (j < n)
  {
    if (A[j] != B)
    {
      A[i] = A[j];
      i++;
    }
    j++;
  }
  return i;
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}