# include <iostream>
using namespace std;
# include <string>

int main()
{
	// ������ �迭 ����
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