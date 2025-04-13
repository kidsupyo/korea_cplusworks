# include <iostream>
# include <string>
using namespace std;

/*
	다중 상속 - 자식 클래스가 여러 부모 클래스를 동시에 상속받는 것
*/

class Character {
public:
	Character() { // 생성자
		cout << "Character 클래스 생성자" << endl;
	}
	~Character() { // 소멸자
		cout << "Character 클래스 소멸자" << endl;
	}
};

class Monster {
public:
	Monster() { // 생성자
		cout << "Monster 클래스 생성자" << endl;
	}
	~Monster() { // 소멸자
		cout << "Monster 클래스 소멸자" << endl;
	}
};

// 다중 상속
class MonsterA : public Monster, Character {
private:
	int location[2]; // 좌표 저장
public:
	MonsterA() : MonsterA(0,0){
		cout << "MonsterA 클래스 생성자" << endl;
	}

	// 매개변수가 있는 생성자
	MonsterA(int x, int y) : location{ x, y } {
		cout << "MonsterA 클래스 생성자" << endl;
	}

	// 좌표 출력하는 함수
	void showLocation() {
		cout << "위치(" << location[0] << ", " << location[1] << ")" << endl;
	}
};

int main()
{
	MonsterA forestMonster; // 기본 생성자로 객체 생성
	forestMonster.showLocation();

	MonsterA woodMonster(10,20);
	woodMonster.showLocation();




	return 0;
}