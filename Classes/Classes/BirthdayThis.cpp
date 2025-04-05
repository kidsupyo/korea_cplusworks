//# include <iostream>
//using namespace std;
//
//class BirthDay {
//	int year; // 연도
//	int month; // 월
//	int day; // 일
//public:
//	BirthDay() {}; // 기본 생성자 생략
//	~BirthDay() {};
//
//	void setYear(int year) {
//		this->year = year;
//	}
//	int getYear() { return year; }
//	void printThis();
//};
//// 선언부와 구현부 분리
//void BirthDay::printThis() {
//	cout << this << endl;
//}
//
//int main()
//{
//	BirthDay bDay;
//
//	cout << &bDay << endl;
//	bDay.setYear(2025);
//
//	cout << bDay.getYear()<< endl;
//
//
//	return 0;
//}