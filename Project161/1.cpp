#include <iostream>
using namespace std;

int main() {

	char a;
	int x = 0;
	int y = 0;

	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

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

	cout << "����: " << x << endl;
	cout << "����: " << y << endl;
	return 0;


}