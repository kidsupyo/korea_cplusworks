# include <iostream>
using namespace std;
# include <string>

/* 
	반환 자료형이 없는 함수 (void 형)
*/
void sayHello()
{
	cout << "안녕하세여 ~ \n";
}
void sayHello2(string name)
{
	cout << "안녕하세요~ " << name << endl;
}

int main_1()
{
	// 인사하는 함수 호출
	sayHello();
	sayHello2("정은");



	return 0;
}