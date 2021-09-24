string Solution::reverseString(string A)
{
  stack<char> st;
  int n = A.length();
  for (int i = 0; i < n; i++)
    st.push(A[i]);

  for (int i = 0; i < n; i++)
  {
    A[i] = st.top();
    st.pop();
  }
  return A;
}
