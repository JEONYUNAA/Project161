#include <iostream>

using namespace std;

int main() {

	int a, b;
	int sum = 0;

	cin >> a;
	cin >> b;

	cout << "N ���� " << a;
	cout << ", M ���� " << b << endl;

	for (int i = 0; i <= a; i++)
	{

		if (i % b == 0) {
			sum += i;

		}

	}

	cout << sum << endl;

}