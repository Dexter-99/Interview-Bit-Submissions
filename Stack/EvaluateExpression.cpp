int Solution::evalRPN(vector<string> &A)
{
  stack<string> st;
  int n = A.size();
  for (int i = 0; i < n; i++)
  {
    if (A[i] == "+")
    {
      int a = stoi(st.top());
      st.pop();
      int b = stoi(st.top());
      st.pop();
      int val = b + a;
      st.push(to_string(val));
    }
    else if (A[i] == "-")
    {
      int a = stoi(st.top());
      st.pop();
      int b = stoi(st.top());
      st.pop();
      int val = b - a;
      st.push(to_string(val));
    }
    else if (A[i] == "*")
    {
      int a = stoi(st.top());
      st.pop();
      int b = stoi(st.top());
      st.pop();
      int val = b * a;
      st.push(to_string(val));
    }
    else if (A[i] == "/")
    {
      int a = stoi(st.top());
      st.pop();
      int b = stoi(st.top());
      st.pop();
      int val = b / a;
      st.push(to_string(val));
    }
    else
      st.push(A[i]);
  }
  return stoi(st.top());
}
