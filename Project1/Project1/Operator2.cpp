# include <iostream>
# include <string>
using namespace std;

int main_5()
{
	// �� ���� - �����(true/false -> 1�� 0���� ���)
	int a = 99;
	int b = 9;

	cout << (a == b) << endl; // 0
	cout << (a != b) << endl; // 1

	// �� ���� - (&&, !, ||)
	cout << "(a == b) && (a > b) :" << ((a == b) && (a > b)) << endl; // 0.  and �� �����̹Ƿ� �� ���� ��� ���̾�� 1�� ��µȴ�.
	cout << "!(a > b) :" << !(a > b) << endl; // 0. �� ������ ���̸� �����̰�, �� ���� ��� �����̾�� �� ���� ��ȯ.
	// || �� or �� �����̹Ƿ� �� ���� �� �Ѱ��� ���̸� 1�� ��µȴ�.

	// ���� ���� (���ǽ� ? "��" : "����")
	int fatherAge = 47;
	int motherAge = 45;
	char result1;
	string result2;

	result1 = (fatherAge > motherAge) ? 'T' : 'F'; // �׻� �� ��ȯ���� ����, ���� ��ȯ���� ������
	result2 = (fatherAge > motherAge) ? "True" : "False";

	cout << "��� : " << result1 << endl;
	cout << "��� : " << result2 << endl;




	return 0;
}