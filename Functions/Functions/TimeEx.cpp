# define _CRT_SECURE_NO_WARNINGS // localtime()을 사용
# include <iostream>
using namespace std;
# include <string>
# include <thread>

/*
	시간 관련 내장 함수
*/

int main()
{
	// 시간을 표기 자료형 - time_t
	//time_t now = time(NULL);

	//cout << now << "초" << endl;


	//time(&start);
	//// 0.5초 간격으로 1 ~ 10 출력
	//for (int i = 1; i <= 10; i++)
	//{
	//	cout << i << endl;
	//	this_thread::sleep_for(chrono::milliseconds(500));
	//}
	//time(&end);

	// 날짜와 시간 표기
	time_t ct;
	struct tm* datetime; // tm 구조체 포인터 변수 선언

	// 현재 시간 가져오기
	time(&ct);
	datetime = localtime(&ct); //localtime() 으로 표기 포맷팅

	// 날짜 -년, 월, 일
	cout << "현재 년도: " << datetime->tm_year + 1900 << endl;
	cout << "현재 월: " << datetime->tm_mon + 1 << endl;
	cout << "현재 일: " << datetime->tm_mday << endl;

	// 시간 - 시, 분, 초
	cout << "현재 시 : " << datetime->tm_hour << endl;
	cout << "현재 분 : " << datetime->tm_min << endl;
	cout << "현재 초 : " << datetime->tm_sec << endl;

	// 오늘 날짜
	cout << "오늘 날짜 : " << datetime->tm_year + 1900 << "," << datetime->tm_mon + 1 << "," << datetime->tm_mday << "," << endl;







	return 0;
}