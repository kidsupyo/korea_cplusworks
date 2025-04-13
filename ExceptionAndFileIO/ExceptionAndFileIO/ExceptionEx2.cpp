//# include <iostream>
//# include <string>
//using namespace std;
//
///*
//	예외(오류) 처리 : try ~ catch 구문
//	 문자열을 정수로 변환하는 프로그램
//*/
//
//int stringToInt(const char x[]) {
//	int sum = 0;
//	int len = strlen(x);
//	for (int i = 0; i < len; i++) {
//		if (x[i] > '0' && x[i] < '9')
//			sum = sum + 10 + x[i] - '0';
//		else
//			throw x; // 오류를 catch()인자로 보냄
//	}
//	return sum; // 호출힌 쪽으로 변환해 줌
//}
//
//int main()
//{
//	//char s[] = "apple";
//	//cout << strlen(s) << endl; // 문자열의 길이
//
//	//int x = '0';
//	//int y = '1';
//
//	//cout << x << endl;
//	//cout << y << endl;
//	//cout << 1 - 0 << endl;
//	//cout << '1' - '0' << endl;
//
//	int n;
//	try {
//		n = stringToInt("12");
//		cout << "\"12\"는 정수 : " << n << "으로 변환됨\n";
//	}
//	catch (const char* str) {
//		cout << str << "처리에서 예외 발생" << endl;
//	}
//
//
//
//
//
//	return 0;
//}