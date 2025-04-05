//# include <iostream>
//// 매크로함수는 컴파일 하기 전에 전처리가 됨
//# define SQUARE(X) X*X // 매크로 함수
//using namespace std;
//
//// 함수가 호출되지 않고 바로 실행됨
//inline int square(int x) { return x * x; }
//// 일반 함수
////int square(int x)
////{
////	return x * x;
////}
//
//int main()
//{
//	// 제곱수를 계산
//	int val = square(8);
//
//	int val2 = SQUARE(8);
//
//	cout << val << endl;
//	cout << val2 << endl;
//
//
//
//	return 0;
//}