# include <iostream>
using namespace std;

// ��� ������ ����ϱ�
int main_4()
{
	// ���� ������
	int a = 99;
	int b = 9;


	cout << a++ << endl; // ������ 99 ���� (��ġ���� -> ���߿� ���ϱ�)
	cout << a << endl; // ���� 100 ���

	cout << ++a << endl; // ó������ 101 ���� & ���(��ġ���� -> ó���� ���ϱ�)

	cout << a-- << endl; // ������ 101. �״������� 100
	cout << --a << endl; // ó������ 1 �� 99. ���� 99 ���

	// ��� ������
	int quotient, remainder;

	quotient = a / b;
	remainder = a % b;

	cout << "�� : " << quotient << endl;
	cout << "������ : " << remainder << endl;

	return 0;
}