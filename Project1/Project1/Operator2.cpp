# include <iostream>
# include <string>
using namespace std;

int main_5()
{
	// 비교 연산 - 결과값(true/false -> 1과 0으로 출력)
	int a = 99;
	int b = 9;

	cout << (a == b) << endl; // 0
	cout << (a != b) << endl; // 1

	// 논리 연산 - (&&, !, ||)
	cout << "(a == b) && (a > b) :" << ((a == b) && (a > b)) << endl; // 0.  and 논리 연산이므로 두 명제 모두 참이어야 1이 출력된다.
	cout << "!(a > b) :" << !(a > b) << endl; // 0. 한 조건이 참이면 거짓이고, 두 명제 모두 거짓이어야 참 값을 반환.
	// || 는 or 논리 연산이므로 두 명제 중 한개라도 참이면 1이 출력된다.

	// 조건 연산 (조건식 ? "참" : "거짓")
	int fatherAge = 47;
	int motherAge = 45;
	char result1;
	string result2;

	result1 = (fatherAge > motherAge) ? 'T' : 'F'; // 항상 참 반환값이 왼쪽, 거짓 반환값이 오른쪽
	result2 = (fatherAge > motherAge) ? "True" : "False";

	cout << "결과 : " << result1 << endl;
	cout << "결과 : " << result2 << endl;




	return 0;
}