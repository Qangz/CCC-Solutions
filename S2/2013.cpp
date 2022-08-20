#include <iostream>
#include <vector>
using namespace std;
int main() 
{
  int w, n;
  cin >> w >> n;
  vector<int> v;
  for(int i = 0; i < n; ++i) 
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
  int total = 0;
  int count = 0;
  for(int i = 0; i < n; ++i) 
  {
    total += v[i];
    if (count >= 4) total -= v[i-4];
    if(total > w) break;
    ++count;
  }
  cout << count;
}