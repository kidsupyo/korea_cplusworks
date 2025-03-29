# include <iostream>
using namespace std;
# include <string>

int main_3()
{
	// 정수형 배열 선언
	int number[] = { 11,55,78,46,23 };

	// 최댓값 구하기
	int max = number[0]; // 11

	for (int i = 0; i < size(number); i++)
	{
		if (number[i] < max)
		{
			max = number[i];
		}
	}
	cout << max << endl;


	return 0;
}