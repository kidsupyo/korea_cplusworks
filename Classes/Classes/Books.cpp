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
//private: // private: 없어도 private 처리 되는거임 -> 기본이 private이다.
//	int number; // 책 번호
//	string title; // 책 제목
//	string author; // 책 저자
//
//public:
//	Book(){} // 기본 생성자 - 생략 가능
//	Book(int num, string tit, string auth) {
//		number = num;
//		title = tit;
//		author = auth;
//	}
//	
//
//	// 책 번호 가져오는 함수
//	int getNumber() {
//		return number;
//	}
//
//	// 책 제목 가져오기
//	string getTitle() {
//		return title;
//	}
//
//
//	// 저자 가져오기
//	string getAuthor() {
//		return author;
//	}
//};
//
//int main()
//{
//	/*Book book1(100, "채식주의자", "한강");
//
//	cout << "책 번호 : " << book1.getNumber() << endl;*/
//
//	// 책 3권 생성
//	Book book[3] = {
//		Book(100,"채식주의자", "한강"),
//		Book(100, "카라마조프의 형제들", "표도르 도스토예프스키"),
//		Book(100, "해리포터", "J.K 롤링")
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "책 번호 : " << book[i].getNumber() << endl;
//		cout << "책 제목 : " << book[i].getTitle() << endl;
//		cout << "책 저자 : " << book[i].getAuthor() << endl;
//	}
//
//
//
//
//	return 0;
//}