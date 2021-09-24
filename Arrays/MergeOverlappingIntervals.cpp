/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A)
{
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  vector<Interval> list;
  sort(A.begin(), A.end(), [](Interval a, Interval b) {
    return a.start < b.start;
  });
  Interval res = A[0];
  for (int i = 1; i < A.size(); i++)
  {
    if (A[i].start <= res.end)
    {
      res.end = max(res.end, A[i].end);
    }
    else
    {
      list.push_back(res);
      res = A[i];
    }
  }
  list.push_back(res);
  return list;
}
