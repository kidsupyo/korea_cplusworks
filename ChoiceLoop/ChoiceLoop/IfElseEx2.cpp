# include <iostream>
# include <string> // string 자료형
using namespace std;

/* 
	점수에 따른 학점 계산 프로그램
	90~100점 -> 'A'
	80~90점 -> 'B'
	70~80점 -> 'C'
	70점 미만 -> 'F'
*/

int main_2()
{
	// 다중 if문 : if ~ else if ~ else
	int score = 85; // 점수 변수
	char grade; // 학점 변수

	cout << "점수를 입력하세요 : ";
	cin >> score;

	if (score >= 90 && score <= 100)
	{
		grade = 'A';
	}
	else if (score >= 80 && score <= 90)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}

	cout << "학점은 " << grade << " 입니다.\n";




	return 0;
}