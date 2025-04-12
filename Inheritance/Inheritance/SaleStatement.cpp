# include <iostream>
# include <string>
using namespace std;

/*
	매출 전표(SaleStatement) 작성하기
*/

class Drink {
protected: // Alcohol 클래스에서 접근 가능
	string name; // 음료 이름
	int price; // 가격
	int quantity; // 수량

public:
	// 생성자
	Drink(string name, int price, int quantity) :
		name(name), price(price), quantity(quantity) {
	}
};

class Alcohol : public Drink {
private:
	float alcper; // 알콜 도수

public:
	Alcohol(float alcper, string name, int price, int quantity) :
		alcper(alcper), Drink(name, price, quantity) {}
};

int main()
{





	return 0;
}