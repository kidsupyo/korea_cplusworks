# include <iostream>
using namespace std;
// �̸�����(�Ҽ�)�� std�� �����
# include <string> // string �ڷ��� ���

int main_2()
{
	// ������ ���� ���� �� �ʱ�ȭ - char. string
	char ch1 = 'A';
	char ch2 = 65; // char�� �����߱� ������ 65��° �ƽ�Ű�ڵ� ���ĺ��� A�� �����ȴ�.
	char ch3 = '\n';
	char ch4[] = "��"; // ���ڿ� ���� �ι��� '\0' ����

	cout << ch1 << endl;
	cout << ch2 << endl; // �ƽ�Ű�ڵ� 'A'�� �ش���
	cout << ch3 << endl; // ��(NULL)�����̹Ƿ� �Ⱥ���
	cout << ch4 << endl;
	cout << "�ڷ����� ũ�� : " << sizeof(ch1) << endl;
	cout << "�ڷ����� ũ�� : " << sizeof(ch4) << endl;
	cout << "======================\n";

	// ���ڿ� (c++���� �߰��� �ڷ��� - string)
	string s1 = "banana";
	string s2 = "���ξ���";

	cout << s1 << endl;
	cout << size(s1) << endl;
	cout << size(s2) << endl;


	return 0;
}