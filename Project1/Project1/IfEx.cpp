# include <iostream>
# include <string>
using namespace std;

int main()
{
	// ���̰� 15�� �̻��̸� "������" ����
	int age;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> age;

	if (age >= 15)
	{
		cout << "�������Դϴ�.\n" << endl;
	}
	cout << "���̴�" << age << "�� �Դϴ�.\n";

	// ���̰� 15�� �̻��̸� "������" ����, �׷��� ������ "�����Ұ�" ����
	if (age >= 15)
	{
		cout << "�������Դϴ�.\n";
	}
	else // else if(age < 15)
	{
		cout << "�����Ұ��Դϴ�.\n";
	}



	return 0;
}