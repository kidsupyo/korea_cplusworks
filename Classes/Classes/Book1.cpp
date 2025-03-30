//# include <iostream>
//# include <string>
//using namespace std;
//
///*
//접근 제어자
//- public : 외부에서 접근 가능
//- private : 외부에서 접근 불가 (내부는 접근 가능)
//- private에 접근하기 위한 멤버 함수 생성 - set+변수(), get+변수()
//*/
//
//class Book {
//private : // private: 없어도 private 처리 되는거임 -> 기본이 private이다.
//	int number; // 책 번호
//	string title; // 책 제목
//	string author; // 책 저자
//
//public :
//	// 책 번호 입력 함수
//	void setNumber(int num) {
//		number = num;
//	};
//
//	// 책 번호 가져오는 함수
//	int getNumber() {
//		return number;
//	}
//
//	// 책 제목 입력
//	void setTitle(string tit) {
//		title = tit;
//	}
//	// 책 제목 가져오기
//	string getTitle() {
//		return title;
//	}
//	// 저자 입력
//	void setAuthor(string auth) {
//		author = auth;
//	}
//	// 저자 가져오기
//	string getAuthor() {
//		return author;
//	}
//};
//
//int main()
//{
//	Book book1;
//
//	//book1.number = 100;
//	book1.setNumber(100);
//	cout << "책 번호 : " << book1.getNumber() << endl;
//	book1.setTitle("채식주의자");
//	cout << "책 제목 : " << book1.getTitle() << endl;
//	book1.setAuthor("한강");
//	cout << "책 저자 : " << book1.getAuthor() << endl;
//
//
//
//
//	return 0;
//}