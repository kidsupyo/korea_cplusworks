# include <iostream>
# include <string>
using namespace std;

int main_6()
{
	// 입력 작업
	int number; //학번
	string name; // 이름
	int eng; // 영어 점수
	int math; // 수학 점수
	double avg; // 평균 점수

	cout << "학번 입력 :";
	cin >> number;

	cout << "학번 : " << number << endl;
	// or -> cout << "학변 : " << number << "\n" 으로 줄바꿈 해도 된다.

	cout << "이름 입력 :";
	cin >> name;

	cout << "이름 : " << name << endl;

	cout << "영어 점수 입력 :";
	cin >> eng;
	cout << "영어 점수 : " << eng << endl;

	cout << "수학 점수 입력 :";
	cin >> math;
	cout << "수학 점수 : " << math << endl;

	// 평균 계산
	avg = (double)(eng + math) / 2;
	cout << avg << endl;



	return 0;
}