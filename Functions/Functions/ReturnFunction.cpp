# include <iostream>
using namespace std;
# include <string>

int square(int x)
{
	return x * x;
}
int myAbs(int y)
{
	if (y < 0)
	{
		return -y;
	}
	else
	{
		return y;
	}
}
string message()
{
	return "Happy Birthday !";
}

int main_2()
{
	// ������ ��� �Լ�
	int value1 = square(6);

	cout << value1 << endl;

	// ���� ��� �Լ�
	int value2 = myAbs(-2);

	// "���� �����ؿ�"�� ��ȯ
	string msg = message();
	cout << msg << endl;



	cout << value2 << endl;




	return 0;
}