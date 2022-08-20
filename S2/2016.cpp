#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool stob(int i, int j)
{
	return (i < j);
}

bool btos(int i, int j) 
{ 
	return (i > j); 
}

int main() {
	int type, n;
	cin >> type >> n;
	vector<int> v1(n);
	vector<int> v2(n);
	for (int i = 0; i < n; ++i) 
	{
		int input;
		cin >> input;
		v1[i] = input;
	}
	for (int i = 0; i < n; ++i) 
	{
		int input;
		cin >> input;
		v2[i] = input;
	}
	if (type == 1) 
	{
		sort(v1.begin(), v1.end(), btos);
		sort(v2.begin(), v2.end(), btos);
		int total = 0;
		for (int i = 0; i < n; ++i) {
			total += max(v1[i], v2[i]);
		}
		cout << total;
	}
	else 
	{
		int total = 0;
		sort(v1.begin(), v1.end(), btos);
		sort(v2.begin(), v2.end(), stob);
		for (int i = 0; i < n; ++i) {
			total += max(v1[i], v2[i]);
		}
		cout << total;
	}
}