#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(void)
{
	int num1, num2;
	cout << "�� ���� ���� �Է�:";
	cin >> num1 >> num2;

	if (num2 == 0)
	{
		cout << "������ 0�� �� �� �����ϴ�." << endl;
	}
	else {
		cout << "�������� ��: " << num1 / num2 << endl;
		cout << "�������� ������: " << num1 % num2 << endl;
	}

	system("pause");
	return 0;
}