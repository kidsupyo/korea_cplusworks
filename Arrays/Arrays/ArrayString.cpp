# include <iostream>
using namespace std;
# include <string>

int main_1()
{
	// ���ڿ� �迭 ����
	//string cart = "���";

	//cout << cart << endl;

	string carts[] = { "���", "��", "ȭ����", "����" };

	// �迭�� ũ��
	cout << size(carts) << endl; // �迭�� ũ�� ������ �� sizeof() �ƴϰ� size()�� Ȱ���ؾ� �Ѵ�.

	// Ư�� ��� ���
	cout << carts[2] << endl;

	// Ư�� ��� ����
	carts[1] = "��";

	// ��ü ��� �˻�
	for (int i = 0; i < size(carts); i++)
	{
		cout << carts[i] << " ";
	}





	return 0;
}