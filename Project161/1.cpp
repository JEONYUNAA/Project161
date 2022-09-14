#include <iostream>
using namespace std;

int main() {

	char a;
	int x = 0;
	int y = 0;

	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;

	while (cin >> a) {

		if (a > 96) {

			switch (a)
			{

			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				x++;
				break;

			default:
				y++;
				break;
			}
		}
		else
			cout << "Check to alphabet" << endl;
	}

	cout << "모음: " << x << endl;
	cout << "자음: " << y << endl;
	return 0;


}