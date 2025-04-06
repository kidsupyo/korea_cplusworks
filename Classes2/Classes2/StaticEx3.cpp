//# include <iostream>
//using namespace std;
//
///*
//	static 이 포함된 함수
//*/
//
//class Math {
//	Math() {}; // 기본 생성자 생략
//public:
//	// 절댓값을 구하는 함수
//	static int abs(int x) {
//		return (x < 0) ? -x : x;
//	}
//	// 두 수 중 큰 수를 구하는 함수
//	static int max(int x, int y) {
//		return (x > y) ? x : y;
//	}
//};
//
//int main()
//{
//	/*Math math1;
//	cout << math1.abs(-4) << endl;*/
//
//	// static이 있는 함수는 접근할 때 클래스 이름으로 직접 접근
//	cout << Math::abs(-4) << endl;
//	cout << Math::max(2, 5) << endl;
//
//
//
//
//	return 0;
//}