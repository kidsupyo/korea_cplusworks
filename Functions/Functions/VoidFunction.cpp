# include <iostream>
using namespace std;
# include <string>

/* 
	��ȯ �ڷ����� ���� �Լ� (void ��)
*/
void sayHello()
{
	cout << "�ȳ��ϼ��� ~ \n";
}
void sayHello2(string name)
{
	cout << "�ȳ��ϼ���~ " << name << endl;
}

int main_1()
{
	// �λ��ϴ� �Լ� ȣ��
	sayHello();
	sayHello2("����");



	return 0;
}