#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	unordered_map<string, vector<string>> good;
	unordered_map<string, vector<string>> bad;
	for (int i = 0; i < n; ++i) 
	{
		string x, y;
		cin >> x >> y;
		good[x].push_back(y);
	}
	int b;
	cin >> b;
	for (int i = 0; i < b; ++i) 
	{
		string x, y;
		cin >> x >> y;
		bad[x].push_back(y);
	}
	int c;
	cin >> c;
	int count = 0;
	for (int i = 0; i < c; ++i) 
	{
		string groups[3];
		string x, y, z;
		cin >> x >> y >> z;
		groups[0] = x;
		groups[1] = y;
		groups[2] = z;
		for (auto m : groups) 
		{
			if(good.find(m) != good.end()) 
			{
				for(auto j : good.at(m)) 
				{	
					if (groups[0] != j && groups[1] != j && groups[2] != j)	++count;
				}
			}
			if (bad.find(m) != bad.end())
			{
				for (auto h : bad.at(m))
				{
					if (groups[0] == h || groups[1] == h || groups[2] == h)	++count;
				}
			}
		}
		
	}
	cout << count;
}