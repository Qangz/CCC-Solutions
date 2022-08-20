#include <iostream>
using namespace std;
int main() {
  int n, count;
  cin >> n;
  char student[10000];
  char correct[10000];
  for(int i = 0; i < n; ++i)
  {
    char input;
    cin >> input;
    student[i] = input;
  }
  for(int x = 0; x < n; ++x)
  {
    char input2;
    cin >> input2;
    correct[x] = input2;
  }
  count = 0;
  for(int y = 0; y < n; ++y)
  {
    if(student[y] == correct[y]) ++count;
  }
  cout << count;
}