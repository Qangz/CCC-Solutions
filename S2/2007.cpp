#include <iostream>
#include <algorithm>
using namespace std;
int n,m, w, l, h;
struct Volume 
{
	int w;
	int l;
	int h;
};
Volume v[1001];
bool cV(Volume a, Volume b) 
{
	return a.w * a.l * a.h < b.w* b.l* b.h;
}
bool fit(int w, int l, int h) 
{
	int a[3];
  int b[3]={w, l, h};
  sort(b, b+3);
  for (int i = 0; i < n; i++)
  {
    a[0] = v[i].w;
    a[1] = v[i].l;
    a[2] = v[i].h;
    sort(a, a+3);
    if (b[0] <= a[0] && b[1] <= a[1] && b[2] <= a[2]) 
    {
      cout << a[0] * a[1] * a[2]<<"\n";
      return true;
    }
  }
  return false;
}
int main() 
{
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> w >> l >> h;    
		v[i].w = w;
		v[i].l = l;
		v[i].h = h;
	}
	sort(v, v + n, cV);
	cin >> m;
	for (int i = 0; i < m; i++) 
	{
		cin >> w >> l >> h;   
		if (!fit(w, l, h)) 
		{
			cout << "Item does not fit.\n";
		}
	}
	return 0;
}
