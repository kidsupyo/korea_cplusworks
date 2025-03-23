# include <iostream>
# include <string> // string 자료형
using namespace std;

int main_3()
{
	// switch ~ case
	int floor = 1;

	cout << "가고 싶은 층을 눌러주세요 : ";
	cin >> floor;

	switch (floor) // 조건-변수
	{
	case 1:
		cout << "1층을 눌렀습니다.\n";
		break;
	case 2:
		cout << "2층을 눌렀습니다.\n";
		break;
	case 3:
		cout << "3층을 눌렀습니다.\n";
		break;
	default :
		cout << "건물에 없는 층입니다.\n";
		break;
	}



	return 0;
}