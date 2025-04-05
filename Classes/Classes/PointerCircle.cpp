//# include <iostream>
//# define M_PI 3.1415 // 매크로 함수
//using namespace std;
///*
//	클래스 (객체) 간 참조
//*/
//class Point {
//private :
//	int x;
//	int y;
//public:
//	// 생성자
//	/*Point(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}*/
//	// setter 함수
//	void setX(int x) { this->x = x; }
//	void setY(int y) { this->y = y; }
//
//	// getter 함수
//	int getX() {
//		return x;
//	}
//	int getY() { return y; }
//};
//class Circle {
//private:
//	Point center; // 중심점(Point 자료형 사용)
//	int radius; // 반지름
//public:
//	// 생성자 초기화 목록 사용
//	// Circle(int x, int y, int radius) : center(x, y), radius(radius) {}
//	Circle(int x, int y, int radius) {
//		this->center.setX(x);
//		this->center.setY(y);
//		this->radius = radius;
//	}
//
//	// 원의 정보
//	void showInfo() {
//		cout << "원의 중심은(" << center.getX() << ", " << center.getY() << ")이고, 반지름은 " << radius << "입니다.\n";
//	}
//	// 원의 넓이 = 원주율 x 반지름^2
//	int getArea() {
//		return M_PI * radius * radius;
//	}
//};
//int main()
//{
//	Circle c1(2, 3, 5);
//	c1.showInfo();
//	
//	cout << (double)c1.getArea() << endl;
//
//
//
//	return 0;
//}