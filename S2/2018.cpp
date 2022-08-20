#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>> &grid, int l) 
{
	int a[10000];
	int index = 0;
	for (int y = 0; y < l; ++y) 
  {
		for (int x = 0; x < l; ++x) 
    {
			a[index] = grid[y][x];
			++index;
		}
	}
	index = 0;
	for (int y = l; y > 0; --y) 
  {
		for (int x = 0; x < l; ++x) 
    {
			grid[x][y-1] = a[index];
			++index;
		}
	}
}

int main() 
{
	int l;
	cin >> l;
	vector<vector<int>> grid(l, vector<int>(l));
	for (int y = 0; y < l; ++y) 
  {
		for (int x = 0; x < l; ++x) 
    {
			int i;
			cin >> i;
			grid[y][x] = i;
		}
	}
	int smallest = 1000000001;
	for (int i = 0; i < 4; ++i) 
  {
		if (grid[0][0] < smallest) smallest = grid[0][0];
		rotate(grid, l);
	}
	while (grid[0][0] != smallest) rotate(grid, l);
	for (auto x : grid) {
		for (int i = 0; i < l; ++i) 
			cout << x[i] << " ";
		cout << "\n";
	}
}