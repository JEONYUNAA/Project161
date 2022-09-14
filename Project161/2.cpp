#include <iostream>
#include <random>

using namespace std;

int main() {

	std::srand(5323);
	char x;

	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	std::random_device rd;
	std::mt19937_64 mersenne(rd());
	std::uniform_int_distribution<>number(1, 10);

	int a = number(mersenne);
	int b = number(mersenne);
	int answer;


	cout << a << " ";
	cout << b;

	cout << "\n������ �Է��ϱ�(+,-,*,/)" << endl;
	cin >> x;
	cout << "��� �Է��ϱ�" << endl;

	switch (x)
	{
	case '+':
		cin >> answer;
		if (a + b == answer)
			cout << "�¾ҽ��ϴ�";
		else
			cout << "Ʋ�Ƚ��ϴ�";
		break;
	case'-':
		cin >> answer;
		if (a - b == answer)
			cout << "�¾ҽ��ϴ�";
		else
			cout << "Ʋ�Ƚ��ϴ�";
		break;
	case'*':
		cin >> answer;
		if (a * b == answer)
			cout << "�¾ҽ��ϴ�";
		else
			cout << "Ʋ�Ƚ��ϴ�";
		break;
	default:
		cin >> answer;
		if (a / b == answer)
			cout << "�¾ҽ��ϴ�";
		else
			cout << "Ʋ�Ƚ��ϴ�";
		break;
	}


}