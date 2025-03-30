# include <iostream>
using namespace std;
# include <string>

// 구조체 - 여러가지 자료형을 그룹화 함
struct Student {
	string name; // 이름
	int grade; // 학년
	string address; // 주소
};

int main()
{
	// 구조체 사용 - 구조체 변수 생성
	// '.'연산자로 접근한다
	Student st = Student();
	st.name = "김윤호";
	st.grade = 1-2;
	st.address = "서울시 노원구 중계동";

	cout << "학생 이름 : " << st.name << endl;
	cout << "학생 학년 : " << st.grade << endl;
	cout << "학생 주소 : " << st.address << endl;



	return 0;
}