#include <iostream>
#include <vector>
using namespace std;

struct code 
{
  char c;
  string s;
};

int main() 
{
  int n;
  cin >> n;
  vector<code> v(n);
  for(int i = 0; i < n; ++i) 
  {
    char u;
    string k;
    cin >> u >> k;
    v[i].c = u;
    v[i].s = k;
  }
  string seq;
  cin >> seq;
  for (int i = 0; i < n; ++i)
  {
      int pos = seq.find(v[i].s);
      if (pos != string::npos && pos == 0)
      {
          cout << v[i].c;

          for (int c = 0; c < v[i].s.length(); ++c)
              seq.erase(seq.begin());

          i = -1;
      }
  }
  return 0;
}