# include <iostream>
# include <string>
using namespace std;

int main_6()
{
	// �Է� �۾�
	int number; //�й�
	string name; // �̸�
	int eng; // ���� ����
	int math; // ���� ����
	double avg; // ��� ����

	cout << "�й� �Է� :";
	cin >> number;

	cout << "�й� : " << number << endl;
	// or -> cout << "�к� : " << number << "\n" ���� �ٹٲ� �ص� �ȴ�.

	cout << "�̸� �Է� :";
	cin >> name;

	cout << "�̸� : " << name << endl;

	cout << "���� ���� �Է� :";
	cin >> eng;
	cout << "���� ���� : " << eng << endl;

	cout << "���� ���� �Է� :";
	cin >> math;
	cout << "���� ���� : " << math << endl;

	// ��� ���
	avg = (double)(eng + math) / 2;
	cout << avg << endl;



	return 0;
}