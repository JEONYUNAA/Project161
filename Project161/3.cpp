#include <iostream>

using namespace std;

int main() {

	int a, b;
	int sum = 0;

	cin >> a;
	cin >> b;

	cout << "N 값은 " << a;
	cout << ", M 값은 " << b << endl;

	for (int i = 0; i <= a; i++)
	{

		if (i % b == 0) {
			sum += i;

		}

	}

	cout << sum << endl;

}