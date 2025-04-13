//# include <iostream>
//# include <string>
//using namespace std;
//
///*
//	다형성(polymorphism) - 객체 타입(자료형)이 려러가지 형태로 구현된다.
//*/
//
//class Animal {
//public:
//	void breathe() {
//		cout << "동물이 숨을 쉽니다.\n";
//	}
//
//	// 가상(추상) 함수 - 수현 내용이 없고, 상속받을 클래스에서 강제로 구현해야함
//	virtual void cry() {}
//};
//
//class Cat : public Animal {
//public:
//	void cry() {
//		cout << "야옹" << endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	void cry() {
//		cout << "강아지는 멍멍" << endl;
//	}
//};
//
//int main()
//{
//	Cat cat1;
//	cat1.breathe();
//	cat1.cry();
//
//	Dog dog;
//	dog.breathe();
//	dog.cry();
//
//	// 동적 객체 생성 - ㅍㅎ안터 사용
//	// 프로그램 실행중에 생성되고 사용후 소멸됨
//	// 부모 타입 = 자식 타입(자동 형변환)
//	Animal* cat2 = new Cat;
//	cat2->cry();
//	Animal* dog1 = new Dog;
//	dog1->cry();
//
//	delete cat2; // 메모리 해제
//	delete dog1;
//
//
//
//
//	return 0;
//}