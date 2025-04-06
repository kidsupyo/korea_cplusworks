//# include <iostream>
//# include <string>
//# include <vector>
//using namespace std;
//
///*
//	벡터(vector)는 내부에 배열에 가지고 있음
//	벡터는 순서(인덱스)가 있다.
//*/
//
//int main()
//{
//	// 여러 개의 문자열을 저장할 벡터 생성
//	vector<string> list;
//	string name;
//
//	// 요소 저장
//	list.push_back("J.R.R Tolkien");
//	list.push_back("Hanya Yanagihara");
//	list.push_back("Fyodor Dostoevsky");
//	list.push_back("Leo Tolstoy");
//
//	// 리스트의 크기
//	cout << list.size() << endl;
//
//	// 첫번째 요소 출력 at() - 위치를 알려주는 함수
//	cout << list[0] << endl;
//	cout << list.at(0) << endl;
//
//	// 전체 출력
//	/*for (int i = 0; i < list.size(); i++)
//	{
//		cout << list[i] << endl;
//	}*/
//
//	// 최댓값 계산
//	name = list.at(0);
//	for (int i = 0; i < list.size(); i++)
//	{
//		if (list[i] > name)
//			name = list[i];
//	}
//	cout << name << endl;
//
//
//
//
//
//	return 0;
//}