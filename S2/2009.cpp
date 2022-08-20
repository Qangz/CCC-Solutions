#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

string myXor(string a1, string a2) 
{
  string temp;
  for(size_t i = 0; i < a1.length(); i++) 
  {
    if(a1.at(i) == a2.at(i)) temp += "0";
    else temp += "1";
  }
  return temp;
}

int main() {
	int r, l, repeat;
  set<string> s;
  string n;
  
	cin >> r >> l;
  string light[31];

  for(int i = 0; i < r; i++) 
  {
    for(int u = 0; u < l; u++) 
    {
      cin >> n;
      light[i] += n;
    }
  }
  vector<string> v;
  for(int x = 1; x < r; x++) 
  {
    repeat = 1;
    while (true) 
    {
      n = light[x];
      for(int i = 0; i < repeat; i++) n = myXor(light[x-1], n); 
      for(int y = x+1; y < r; y++) n = myXor(light[y], n);
      if (find(v.begin(), v.end(), n) != v.end()) break;
      v.push_back(n);
      ++repeat;
    }
    for(string h : v) s.insert(h);
    v.clear();
  }
  cout << s.size();
  
	return 0;
}