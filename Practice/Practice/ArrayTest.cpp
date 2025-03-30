# include <iostream>
using namespace std;
# include <string>

/*
	 배열의 길이가 5인 정수 배열을 선언하고, 1~10 중 홀수만을 배열에 저장한 후 그 합과 평균을 계산하시오.(평균은 실수형 자료형을 사용함)
*/

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 2 * i + 1;
	}

	// 총합
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;

	// 평균
	double avg;
	avg = (double)sum / size(arr);
	cout << avg << endl;





	return 0;
}