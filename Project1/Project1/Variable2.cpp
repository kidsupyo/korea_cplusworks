# include <iostream>
using namespace std;
// 이름공간(소속)을 std로 사용함
# include <string> // string 자료형 사용

int main_2()
{
	// 문자형 변수 선언 및 초기화 - char. string
	char ch1 = 'A';
	char ch2 = 65; // char로 설정했기 때문에 65번째 아스키코드 알파벳인 A로 설정된다.
	char ch3 = '\n';
	char ch4[] = "나"; // 문자열 끝에 널문자 '\0' 포함

	cout << ch1 << endl;
	cout << ch2 << endl; // 아스키코드 'A'에 해당함
	cout << ch3 << endl; // 널(NULL)문자이므로 안보임
	cout << ch4 << endl;
	cout << "자료형의 크기 : " << sizeof(ch1) << endl;
	cout << "자료형의 크기 : " << sizeof(ch4) << endl;
	cout << "======================\n";

	// 문자열 (c++에서 추가된 자료형 - string)
	string s1 = "banana";
	string s2 = "파인애플";

	cout << s1 << endl;
	cout << size(s1) << endl;
	cout << size(s2) << endl;


	return 0;
}