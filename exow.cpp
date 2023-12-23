#include <iostream>
using namespace std;
int main()
{

	int r, c;
	int i, j;
	int xo[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	for (int x = 0; x < 9; x++) {
		cout << "play x row:";
		cin >> i;
		cout << "x column:";
		cin >> j;
		if (xo[i][j] == 0) {
			xo[i][j] = 1;
		}
		
		for (r = 0; r < 3; r++) {

			for (c = 0; c < 3; c++) {
				if (xo[r][c] == 1) {
					cout << "  x  " << "|";
				}
				if (xo[r][c] == 2) {
					cout << "  o  " << "|";
				}

				if (xo[r][c] == 0) {
					cout << "    " << "|";
				}

			}
			cout << endl << "----------------" << endl;

		}
		
			cout << "play o row:";
			cin >> i;
			cout << "o column:";
			cin >> j;
			if (xo[i][j] == 0) {
				xo[i][j] = 2;
			}
		
		for (r = 0; r < 3; r++) {

			for (c = 0; c < 3; c++) {
				if (xo[r][c] == 1) {
					cout << "  x  " << "|";
				}
				if (xo[r][c] == 2) {
					cout << "  o  " << "|";
				}

				if (xo[r][c] == 0) {
					cout << "    " << "|";
				}

			}
			cout << endl << "----------------" << endl;

		}
	}
}