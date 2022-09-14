#include <iostream>

using namespace std;

int main() {

	char a[3][3];
	int x, y, z, i;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			a[x][y] = ' ';

	for (z = 0; z < 9; z++) {
		cout << "(x,y) ÁÂÇ¥: ";
		cin >> x >> y;
		a[x][y] = (z % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++) {
			cout << "---l---l---" << endl;
			cout << a[i][0] << "  l  " << a[i][1] << "l  " << a[i][2] << endl;

		}
		cout << "---l---l---" << endl;
	}

	return 0;
}