#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool stob(int j, int k) {
	return (j < k);
}

int main() 
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) 
  {
		int m;
		cin >> m;
		v[i] = m;
	}
	sort(v.begin(), v.end(), stob);
	string s;
	int x = n / 2;
	int y = n / 2;
	if (n % 2 > 0) 
  {
		++x;
		++y;
	}
	for (int i = x, d = y; i < n && d > 0; ++i, --d) 
  {
		s += to_string(v[d - 1]);
		s += " ";
		s += to_string(v[i]);
		s += " ";
	}
	if (n % 2 > 0) s += to_string(v[0]);
	cout << s;
}