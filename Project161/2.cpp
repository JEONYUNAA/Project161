#include <iostream>
#include <random>

using namespace std;

int main() {

	std::srand(5323);
	char x;

	cout << "산수 문제를 자동으로 출제합니다." << endl;

	std::random_device rd;
	std::mt19937_64 mersenne(rd());
	std::uniform_int_distribution<>number(1, 10);

	int a = number(mersenne);
	int b = number(mersenne);
	int answer;


	cout << a << " ";
	cout << b;

	cout << "\n연산자 입력하기(+,-,*,/)" << endl;
	cin >> x;
	cout << "결과 입력하기" << endl;

	switch (x)
	{
	case '+':
		cin >> answer;
		if (a + b == answer)
			cout << "맞았습니다";
		else
			cout << "틀렸습니다";
		break;
	case'-':
		cin >> answer;
		if (a - b == answer)
			cout << "맞았습니다";
		else
			cout << "틀렸습니다";
		break;
	case'*':
		cin >> answer;
		if (a * b == answer)
			cout << "맞았습니다";
		else
			cout << "틀렸습니다";
		break;
	default:
		cin >> answer;
		if (a / b == answer)
			cout << "맞았습니다";
		else
			cout << "틀렸습니다";
		break;
	}


}