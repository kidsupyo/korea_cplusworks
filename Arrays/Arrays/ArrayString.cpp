# include <iostream>
using namespace std;
# include <string>

int main_1()
{
	// 문자열 배열 관리
	//string cart = "라면";

	//cout << cart << endl;

	string carts[] = { "라면", "빵", "화장지", "생수" };

	// 배열의 크기
	cout << size(carts) << endl; // 배열의 크기 조사할 때 sizeof() 아니고 size()를 활용해야 한다.

	// 특정 요소 겸색
	cout << carts[2] << endl;

	// 특정 요소 수정
	carts[1] = "쌀";

	// 전체 요소 검색
	for (int i = 0; i < size(carts); i++)
	{
		cout << carts[i] << " ";
	}





	return 0;
}