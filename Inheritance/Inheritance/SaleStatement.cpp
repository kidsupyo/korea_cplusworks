//# include <iostream>
//# include <string>
//using namespace std;
//
///*
//	매출 전표(SaleStatement) 작성하기
//*/
//
//class Drink {
//protected: // Alcohol 클래스에서 접근 가능
//	string name; // 음료 이름
//	int price; // 가격
//	int quantity; // 수량
//
//public:
//	// 생성자
//	Drink(string name, int price, int quantity) :
//		name(name), price(price), quantity(quantity) {}
//
//	// 금액 계산 : 가격 * 수량
//	int calcPrice() { return price * quantity; }
//	// 제목행
//	static void printTitle() { cout << "상품명\t가격\t수량\t금액\n"; }
//	void printData() {
//		cout << name << "\t" << price << "\t" << quantity << "\t" << calcPrice() << endl;
//	}
//};
//
//// Drink를 상속받은 Alcohol 클래스
//class Alcohol : public Drink {
//private:
//	float alcper; // 알콜 도수
//
//public:
//	Alcohol(float alcper, string name, int price, int quantity) :
//		alcper(alcper), Drink(name, price, quantity) {}
//	// 부모 멤버 함수 재정의
//	static void printTitle() { cout << "상품명(도수[%]\t가격\t수량\t금액)\n"; }
//	void printData() {
//		cout << name << "(" << alcper << ")\t" << price << quantity << "\t" << calcPrice() << endl;
//	}
//};
//
//int main()
//{
//	Drink coffee("커피", 2500, 4); // 음료 객체 생성
//	Drink tea("녹차", 3000, 3);
//	Alcohol soju(15.1f,"소주", 4000, 2); // 알콜 객체 생성
//	Alcohol beer(5.2f, "맥주", 3000, 5);
//
//	cout << "=================\n";
//
//	// coffee.printTitle();
//	Drink::printTitle(); // static 함수로 클래스 이름으로 직접 접근
//	coffee.printData();
//	tea.printData();
//	
//	Alcohol::printTitle();
//	soju.printData();
//	beer.printData();
//
//	// 합계
//	int total;
//	total = coffee.calcPrice() + tea.calcPrice() + soju.calcPrice() + beer.calcPrice();
//
//	cout << "*****합계 금액 : " << total << "원*****" << endl;
//
//
//
//	return 0;
//}