//# include <iostream>
//# include <string>
//using namespace std;
//
///*
//	상속 - 기존에 있던 클래스를 사용해서 새로운 클래스를 만드는 것이다. (부모 클래스 <- 자식 클래스)
//*/
//
//class Car {
//public:
//	void drive() {
//		cout << "차가 달립니다.\n";
//	}
//};
//
//class Taxi : public Car {
//public:
//	void drive() {
//		cout << "택시가 달립니다.\n";
//	}
//};
//
//class SportsCar : public Car {
//public:
//	void drive() {
//		cout << "스포츠카가 달립니다.\n";
//	}
//};
//
//int main()
//{
//	Car car;
//	car.drive();
//
//	Taxi taxi;
//	taxi.drive();
//
//	SportsCar sportscar;
//	sportscar.drive();
//
//
//
//	return 0;
//}