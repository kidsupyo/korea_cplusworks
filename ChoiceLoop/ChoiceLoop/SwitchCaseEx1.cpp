# include <iostream>
# include <string> // string �ڷ���
using namespace std;

int main_3()
{
	// switch ~ case
	int floor = 1;

	cout << "���� ���� ���� �����ּ��� : ";
	cin >> floor;

	switch (floor) // ����-����
	{
	case 1:
		cout << "1���� �������ϴ�.\n";
		break;
	case 2:
		cout << "2���� �������ϴ�.\n";
		break;
	case 3:
		cout << "3���� �������ϴ�.\n";
		break;
	default :
		cout << "�ǹ��� ���� ���Դϴ�.\n";
		break;
	}



	return 0;
}