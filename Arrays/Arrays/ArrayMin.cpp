# include <iostream>
using namespace std;
# include <string>

int main()
{
	// 정수형 배열 선언
	int number[] = { 11,55,78,46,23 };

	int min = number[0]; // 11

	for (int i = 0; i < size(number); i++)
	{
		if (number[i] < min)
		{
			min = number[i];
		}
	}
	cout << min << endl;


	return 0;
}