# include <iostream>
# include <string> // string 자료형
using namespace std;

int main_1()
{
	// 숫자 비교문, "==","!=" 사용
	int n1 = 10;
	int n2 = 10;

	if (n1 == n2)
	{
		cout << "두 수는 같습니다.\n";
	}
	else
	{
		cout << "두 수는 같지 않습니다.\n";
	}


	// 문자 비교문
	string str1 = "orange";
	string str2 = "banana";

	if (str1.compare(str2) == 0)
	{
		cout << "두 단어는 일치합니다.\n";
		cout << "결과값 : " << str1.compare(str2) << endl;
	}
	else
	{
		cout << "두 단어는 일치하지 않습니다.\n";
		cout << "결과값 : " << str1.compare(str2) << endl;
	}

	return 0;
}