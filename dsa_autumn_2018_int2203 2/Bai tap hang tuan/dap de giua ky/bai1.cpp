#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  cin.ignore();

  stack<string> st;
  string name;
  while(n--)
  {
    getline(cin, name);
    if (name == "take" && st.size() > 0)
      st.pop();
    if (name != "take" && st.size() < m)
      st.push(name);
  }

  if (st.size()) cout << st.top();
  return 0;
}
