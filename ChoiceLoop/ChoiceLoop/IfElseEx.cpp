# include <iostream>
# include <string> // string �ڷ���
using namespace std;

int main_1()
{
	// ���� �񱳹�, "==","!=" ���
	int n1 = 10;
	int n2 = 10;

	if (n1 == n2)
	{
		cout << "�� ���� �����ϴ�.\n";
	}
	else
	{
		cout << "�� ���� ���� �ʽ��ϴ�.\n";
	}


	// ���� �񱳹�
	string str1 = "orange";
	string str2 = "banana";

	if (str1.compare(str2) == 0)
	{
		cout << "�� �ܾ�� ��ġ�մϴ�.\n";
		cout << "����� : " << str1.compare(str2) << endl;
	}
	else
	{
		cout << "�� �ܾ�� ��ġ���� �ʽ��ϴ�.\n";
		cout << "����� : " << str1.compare(str2) << endl;
	}

	return 0;
}