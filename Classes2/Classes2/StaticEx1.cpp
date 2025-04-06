# include <iostream>
# include <string>
# include <vector>
using namespace std;

/*
	 카드번호 자동 발급 프로그램
*/
class Card {
private:
	string name; // 고객 이름
	int cardNumber; // 카드 번호
	static int serialNum; // 기준 번호(정적 변수)

public:
	Card() {};
	// 매개변수가 있는 생성자
	Card(string name, int cardNumber) {
		this->name = name;
		this->cardNumber = cardNumber;
	}

	// 생성자 : 초기화 목록
	// Card(string name) : name(name), cardNumber(++serialNum) {}

	string getName() {
		return name;
	}
	int getCardNumber() {
		return cardNumber;
	}
};

int Card::serialNum = 1000; // 전역 변수

int main()
{
	//Card card1("신유빈"); // 객체(인스턴스) 생성
	//cout << "고객 이름 : " << card1.getName() << endl;
	//cout << "카드 번호는 : " << card1.getCardNumber() << endl;

	//cout << "===================" << endl;

	//Card card2("이정후");
	//cout << "고객 이름 : " << card2.getName() << endl;
	//cout << "카드 번호는 : " << card2.getCardNumber() << endl;

	// 객체 배열 생성
	/*Card cards[3] = {
		Card("신유빈", 1001),
		Card("이정후", 1002),
		Card("한강", 1003)
	};
	for (int i = 0; i < size(cards); i++)
	{
		cout << "고객 이름 : " << cards[i].getName() << endl;
		cout << "고객 이름 : " << cards[i].getCardNumber() << endl;
		cout << "===================\n";
	}*/

	// vector에 객체 저장
	vector<Card> cards;

	cards.push_back(Card("신유빈", 1001));
	cards.push_back(Card("이정후", 1002));
	cards.push_back(Card("한강", 1003));

	// 1번 인덱스의 자료 출력
	cout << cards[1].getName() << endl;
	cout << cards[1].getCardNumber() << endl;

	// 전체 출력
	for (int i = 0; i < cards.size(); i++) {
		cout << cards[i].getName() << endl;
		cout << cards[i].getCardNumber() << endl;
		cout << "==============" << endl;
	}




	return 0;
}