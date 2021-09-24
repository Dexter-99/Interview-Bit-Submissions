int Solution::searchInsert(vector<int> &A, int B)
{
  int res = A.size();
  int lo = 0, hi = A.size() - 1;
  while (lo <= hi)
  {
    int mid = lo + (hi - lo) / 2;
    if (A[mid] == B)
    {
      return mid;
    }
    else if (A[mid] < B)
    {

      lo = mid + 1;
    }
    else
    {
      res = mid;
      hi = mid - 1;
    }
  }
  return res;
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
