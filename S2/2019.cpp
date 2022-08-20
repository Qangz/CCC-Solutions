#include <iostream>
#include <math.h>
#include <set>
#include <utility>

using namespace std;
set<int> s;
bool isPrime(int n) 
{
  if (n == 0 || n == 1) return false;
  auto found = s.find(n);
  if(found!=s.end()) return true;
  else {
    int sq = int(sqrt(n));
    for(int i = 2; i <= sq; i++) 
    {
      if (n % i == 0) return false; 
    }
    s.insert(n);
    return true;
  }
}

pair<int, int> findP(int n) 
{
  pair<int, int> p;
  int a = n*2;
  int b = 0;
  while (true) {
    if (isPrime(a) && isPrime(b)) 
    {
      p.first = a;
      p.second = b;
      return p;
    }
    --a;
    ++b;
  }
}

int main() 
{
  int input;
  int data;
  cin >> input;
  for (int i = 0; i < input; i++) 
  {
     cin >> data;
     cout << findP(data).first << " " << findP(data).second<<endl;
  }
}