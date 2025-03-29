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
	// 제곱수 계산 함수
	int value1 = square(6);

	cout << value1 << endl;

	// 절댓값 계산 함수
	int value2 = myAbs(-2);

	// "생일 축하해요"를 반환
	string msg = message();
	cout << msg << endl;



	cout << value2 << endl;




	return 0;
}