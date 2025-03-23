# include <iostream>
using namespace std;

// 산술 연산자 사용하기
int main_4()
{
	// 증감 연산자
	int a = 99;
	int b = 9;


	cout << a++ << endl; // 아직은 99 저장 (후치연산 -> 나중에 더하기)
	cout << a << endl; // 이제 100 출력

	cout << ++a << endl; // 처음부터 101 저장 & 출력(전치연산 -> 처음에 더하기)

	cout << a-- << endl; // 아직은 101. 그다음부터 100
	cout << --a << endl; // 처음부터 1 뺀 99. 따라서 99 출력

	// 몫과 나머지
	int quotient, remainder;

	quotient = a / b;
	remainder = a % b;

	cout << "몫 : " << quotient << endl;
	cout << "나머지 : " << remainder << endl;

	return 0;
}