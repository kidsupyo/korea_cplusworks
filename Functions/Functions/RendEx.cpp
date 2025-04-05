//# include <iostream>
//# include <cstdlib> // srand(), rand()
//# include <ctime>
//using namespace std;
//
///*
//	random값 추출
//	1. srand(시드값) 호출
//	2. rand() 호출
//*/
//
//int main()
//{
//	srand(20);
//	srand(time(NULL)); // 시드값이 계속 바뀜
//
//	int rndVal = rand();
//	cout << rndVal << endl;
//
//	// 동전 던지기
//	int coin = rand() % 2;
//	cout << coin << endl;
//
//	// 앞면 - 0, 뒷면 - 1
//	if (coin % 2 == 0)
//	{
//		cout << "앞면\n";
//	}
//	else
//	{
//		cout << "뒷면\n";
//	}
//
//	// 주사위 10번 던지기
//	for (int i = 0; i < 10; i++)
//	{
//		int dice = rand() % 6 + 1;
//		cout << dice;
//	}
//	cout << "===================";
//
//	// 문자형 배열의 요소 추출
//	string carts[] = { "쌀", "콩나물", "커피", "라면" };
//
//	// 배열 요소의 개수 - size()
//	cout << "요소의 개수" << size(carts) << endl;
//
//	int idx = rand() % size(carts); // 0~3까지 출력
//	cout << idx << endl;
//	cout << "품목 : " << carts[idx] << endl;
//
//
//
//
//	return 0;
//}