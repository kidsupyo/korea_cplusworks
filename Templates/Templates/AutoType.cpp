# include <iostream>
# include <string>
# include <vector>
# include <map>
using namespace std;

/*
	auto 자료형
	- 복잡한 형식의 변수 선언을 가소하게 해주고 변수의 타입을 결정하도록 해준다.
*/

inline int square(int x) { return x * x; }

int main()
{
	auto ch = 'k';
	auto n = 2;
	auto* pn = &n; // 주소 저장

	cout << ch << endl;
	cout << "n=" << n << ", pn=" << pn << endl;

	// 함수의 리턴 타입으로 사용
	auto value = square(8);
	cout << value << endl;

	// vector 선언과 동시에 초기화
	vector<int> v = { 1,2,3,4 };

	for (auto it = v.begin(); it != v.end(); it++) {
		// 포인터의 역참조(*) = 값 출력
		cout << *it << " ";
	}



	return 0;
}