# include <iostream>
# include <string>
# include <vector>
using namespace std;

/*
	vector을 활용한 은행 계좌 관리
*/

class BankAccount {
private:
	int accountNumber; // 계좌 번호
	string owner; // 계좌주
	int balance; // 잔고
public:
	// 생성자 : 초기화 목록
	BankAccount(int accountNumber, string owner, int balance) :
		accountNumber(accountNumber), owner(owner), balance(balance){}

	void displayInfo(); // 계좌 정보
	void deposit(int amount);
	void withdraw(int amount);
};

void BankAccount::displayInfo() {
	cout << "계좌 정보\n";
	cout << "계좌 번호 : " << accountNumber << endl;
	cout << "계좌주 : " << owner << endl;
	cout << "잔액 : " << balance << "원" << endl;
}

void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하게요.\n";
	}
	else {
		balance += amount; // balance = balance + amount;
		cout << amount << "원이 입금되었습니다. 현재 잔액 : " << balance << endl;
	}
}

void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하게요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다.\n";
	}
	else {
		balance -= amount; // balance = balance - amount;
		cout << amount << "원이 출금되었습니다. 현재 잔액 : " << balance << endl;
	}
}

int main()
{
	// 은행 계ㅗ자를 저장할 벡터 컨테이너 생성
	vector<BankAccount> accounts;

	// 계좌 생성
	accounts.push_back(BankAccount(1000, "이우주", 10000));
	accounts.push_back(BankAccount(1001, "이우주", 11000));
	accounts.push_back(BankAccount(1002, "이우주", 12000));

	// 첫 번째 계좌 정보
	accounts[0].displayInfo();

	// 입금
	accounts[0].deposit(15000); // 첫 번째 계좌에 입금

	// 출금
	accounts[0].withdraw(60000);

	// 전체 계좌 정보
	for (int i = 0; i < accounts.size(); i++)
	{
		accounts[i].displayInfo();
		cout << "===============\n";
	}

	// 클래스 변수이름 : 객체이름
	for (BankAccount account : accounts) {
		account.displayInfo();
	}





	return 0;
}