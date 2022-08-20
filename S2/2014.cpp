#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n;
  cin >> n;
  vector<string> name1(n);
  vector<string> name2(n);
  for(int i = 0; i < n; ++i) cin >> name1[i];
  for(int i = 0; i < n; ++i) cin >> name2[i];
  bool yn = true;
  for(int i = 0; i < n; ++i) 
  {
    if(name1[i]==name2[i]) yn = false;
  }
  for(int i = 0; i < n; ++i) 
  {
    auto index = find(name2.begin(), name2.end(), name1[i]);
    if(name2[i] != name1[index-name2.begin()]) yn = false;
  }
  string result = (yn) ? "good" : "bad";
  cout << result;
}