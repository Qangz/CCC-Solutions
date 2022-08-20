#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int r, total;
	cin >> r;
	while (r != 0) 
  {
		total = 0;
		for (int y = r; y >= 0; y--) 
    {
			for (int x = r-y; x <= r; x++) 
      {
				if (x*x + y*y > r * r) 
        {
          total += (r-x+1);
          break;
				}
			}
		}
		cout << to_string((long long)pow((2 * r + 1), 2) - 4 * total) << "\n";
		cin >> r;
	}
	return 0;
}