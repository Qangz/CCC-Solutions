#include <vector>
#include <iostream>
using namespace std;
int main() 
{
  int j, a;
  cin >> j >> a;
  vector<char> v(j);
  for(int i = 0; i < j; ++i) 
  {
    char input;
    cin >> input;
    v[i] = input;
  }
  int count = 0;
  for(int i = 0; i < a; ++i) 
  {
    char c;
    int x;
    cin >> c;
    cin >> x;
    if(v[x-1] == 'O') continue;
    if(c == 'S') 
    {
      ++count;
      v[x-1] = 'O';
    }
    else if(c == 'M' && v[x-1] != 'S')
    {
      ++count;
      v[x-1] = 'O';
    }
    else if(c == 'L' && v[x-1] == 'L') {
      ++count;
      v[x-1] = 'O';
    }
  }
  cout << count;
}