# include <iostream>
using namespace std;
# include <string>

int main_2()
{
	// ������ �迭 ����
	/*int arr[3];*/

	// �迭�� ũ��
	/*cout << size(arr) << endl;*/

	// ����
	/*arr[0] = 70;
	arr[1] = 80;
	arr[2] = 97;*/

	// �迭�� ����� ���ÿ� �ʱ�ȭ
	int arr[3] = { 70,75,87 };

	// ��ü ���
	for (int i = 0; i < size(arr); i++)
	{
		cout << arr[i] << endl;
	}
	// ����� �հ�
	int sum = 0;
	for (int p = 0; p < size(arr); p++)
	{
		sum += arr[p];
	}
	cout << sum << endl;
	// ����� ���
	double avg = sum / size(arr);
	cout << (double)sum / size(arr) << endl;

	// �Ҽ��� �ڸ��� ����
	cout << fixed;
	cout.precision(2);
	cout << "��� : " << (double)sum / size(arr) << endl;





	return 0;
}