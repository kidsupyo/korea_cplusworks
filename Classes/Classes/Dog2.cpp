//# include <iostream>
//# include <string>
//using namespace std;
//
///*
//클래스 :
//- 객체(사물)를 추상화한 자료형(Data Type)
//- class 키워드 사용
//- 구성요소 : 멤버 변수, 생성자, 멤버 함수로 구성됨
//- public : 외부에서 접근 가능
//- private : 외부에서 접근 불가 (내부는 접근 가능)
//- 생성자, 멤버 함수는 선언부와 구현부로 분리 가능
//*/
//class Dog {
//	// 멤버 변수
//public: // 접근 제어자
//	string type; // 강아지 종류
//	int age; // 나이
//
//	// 기본 생성자 - 생략하면 컴파일러가 자용으로 생성해줌
//	Dog() {/*type = "강아지";
//		age = 1;*/
//		cout << "생성합니다.\n";
//	};
//
//	// 매개 변수가 있는 생성자
//	Dog(string t, int a) {
//		type = t;
//		age = a;
//	}
//
//	// 멤버 함수
//	void dogInfo();
//	void bark();
//};
//
//void Dog::dogInfo() {
//	cout << "강아지 종류 : " << type << endl;
//	cout << "강아지 나이 : " << age << endl;
//}
//void Dog::bark() {
//	cout << "멍멍~\n";
//}
//
//int main_2()
//{
//	// 클래스의 사용
//	/*Dog dog1("푸들", 3);
//	dog1.dogInfo();
//	dog1.bark();*/
//
//	// 객체 배열
//	Dog dog[3] = {
//		Dog("푸들", 3),
//		Dog("진돗개", 3),
//		Dog("불독", 3)
//	};
//
//	// 특정 객체에 접근
//	dog[1].dogInfo();
//
//	// 전체 출력
//	for (int i = 0; i < 3; i++)
//	{
//		dog[i].dogInfo();
//		dog[i].bark();
//		cout << "==================" << endl;
//	}
//
//
//
//
//
//	return 0;
//}