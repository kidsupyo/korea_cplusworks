# include <iostream>
# include <string> // string �ڷ���
using namespace std;
/*
while�ݺ���
�ʱⰪ
while(���ǽ�){
	���๮
	������
	}
*/
int main_5()
{
	// "�ȳ�"�� 10�� ���
	//int n = 1; // �ݺ� ����
	//while (1) // ���� �ݺ�
	//{
	//	if (n < 10)
	//	{
	//		break;
	//	}
	//	cout << "�ȳ�~" << n << endl;
	//	n++;
	//}

	// 1~10 ������ �հ�
	int sum = 0;
	int n = 1;
	while (1)
	{
		sum += n;
		n++;
		if (n > 10)
		{
			break;
		}
	
	}
	cout << sum << endl;
	

	
	
	
	
	return 0;
}