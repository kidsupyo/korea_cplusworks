# include <iostream>
# include <string> // string 자료형
using namespace std;
/*
while반복문
초기값
while(조건식){
	수행문
	증감값
	}
*/
int main_5()
{
	// "안녕"을 10번 출력
	//int n = 1; // 반복 변수
	//while (1) // 무한 반복
	//{
	//	if (n < 10)
	//	{
	//		break;
	//	}
	//	cout << "안녕~" << n << endl;
	//	n++;
	//}

	// 1~10 까지의 합계
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