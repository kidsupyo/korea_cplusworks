# include <iostream>
using namespace std;

int main_3()
{
	// 자동 형변환 (묵시적 형변환)
	// 정수형 자료형의 크기 int(4) < float(4) < double(8)
	int iNum = 20;
	float fNum = 0.9F; // 끝에 'f', 'F'를 붙임

	cout << iNum << ' ' << fNum << endl;
	cout << iNum + fNum << endl; // 큰 쪽으로 자동형변환됨

	// 강제형변환 (명시적 형변환)
	// (자료형)을 명시함
	double dNum = 1.2;
	int iNum2, iNum3;

	iNum2 = (int)(dNum + fNum); // (1.2 + 0.9 = 2.1 -> int처리 -> 2)

	cout << iNum2 << endl;



	return 0;
}