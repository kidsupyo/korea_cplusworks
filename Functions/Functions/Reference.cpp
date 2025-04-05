# include<iostream>
using namespace std;

/*
	참조 연산자 (&) - 기톤의 메모리 공간에 별명을 붙이는 방법으로 한 개의 변수에 여러 개의 이름을 붙이는 연산자임
*/
void swap(int a, int b) {
	int temp; // 임시 변수
	temp = a;
	a = b;
	b = temp;
}
void swapRef(int& a, int& b) {
	int temp; // 임시 변수
	temp = a;
	a = b;
	b = temp;
}
void swapRef2(int* a, int* b) {
	int temp; // 임시 변수
	temp = *a; // 역참조를 위해 별을 붙임
	*a = *b;
	*b = temp;
}
int main()
{
	//int n = 1;
	//int& x = n; // n을 x에 복사함
	//int& y = n;

	//cout << n << endl;
	//cout << x << endl;
	//cout << y << endl;

	int x = 10, y = 20;
	cout << "값에 의한 호출\n";
	swap(x, y);
	cout << "x=" << x << "y=" << y << endl;
	swapRef2(&x, &y);
	cout << "x=" << x << "y=" << y << endl;




	return 0;
}