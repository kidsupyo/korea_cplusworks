# define _CRT_SECURE_NO_WARNINGS // localtime()�� ���
# include <iostream>
using namespace std;
# include <string>
# include <thread>

/*
	�ð� ���� ���� �Լ�
*/

int main()
{
	// �ð��� ǥ�� �ڷ��� - time_t
	//time_t now = time(NULL);

	//cout << now << "��" << endl;


	//time(&start);
	//// 0.5�� �������� 1 ~ 10 ���
	//for (int i = 1; i <= 10; i++)
	//{
	//	cout << i << endl;
	//	this_thread::sleep_for(chrono::milliseconds(500));
	//}
	//time(&end);

	// ��¥�� �ð� ǥ��
	time_t ct;
	struct tm* datetime; // tm ����ü ������ ���� ����

	// ���� �ð� ��������
	time(&ct);
	datetime = localtime(&ct); //localtime() ���� ǥ�� ������

	// ��¥ -��, ��, ��
	cout << "���� �⵵: " << datetime->tm_year + 1900 << endl;
	cout << "���� ��: " << datetime->tm_mon + 1 << endl;
	cout << "���� ��: " << datetime->tm_mday << endl;

	// �ð� - ��, ��, ��
	cout << "���� �� : " << datetime->tm_hour << endl;
	cout << "���� �� : " << datetime->tm_min << endl;
	cout << "���� �� : " << datetime->tm_sec << endl;

	// ���� ��¥
	cout << "���� ��¥ : " << datetime->tm_year + 1900 << "," << datetime->tm_mon + 1 << "," << datetime->tm_mday << "," << endl;







	return 0;
}