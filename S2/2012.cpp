#include <iostream>
#include <vector>
#include <string>
using namespace std;
int convert(char c) {
  switch(c) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
  }
  cout << "not working"; //debug msg
  return -1;
}
int main() {
  string s;
  cin >> s;
  vector<pair<int, int>> v(s.length()/2);
  
  for(int i = 0; i < s.length(); i += 2) 
  {
    v[i/2].first = int(s.at(i) - '0'); 
    v[i/2].second = convert(s.at(i + 1));
  }
  int out = 0;
  for(int i = 0; i < v.size(); ++i) 
  {
    int num = 0;
    num = v[i].first * v[i].second;
    if(i != v.size() -1 && v[i+1].second > v[i].second) num *= -1;
    out += num;  
  }
  cout << out;
}