#include <iostream>
using namespace std;
bool rowN[5000001], colN[5000001]; 
int main() {
	int row, col;
	cin >> row >> col;
	int actions;
	cin >> actions;
	for (int i = 0; i < actions; ++i) {
		char x;
		int pos;
		cin >> x >> pos;
    --pos;
		if (x == 'R') rowN[pos] = !rowN[pos];
    else colN[pos] = !colN[pos];
	}
  int rowS = 0, colS = 0;
  for(int i = 0; i < row; ++i) {
    if(rowN[i]) ++rowS;
  }
  for(int i = 0; i < col; ++i) {
    if(colN[i]) ++colS;
  }
	long long total = (colS * row + rowS * col) - (2*colS*rowS);
	cout << total;
}