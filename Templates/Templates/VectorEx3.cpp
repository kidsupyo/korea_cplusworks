//# include <iostream>
//# include <vector> // vector 사용을 위해 포함
//using namespace std;
//
//int main()
//{
//	vector<int> vec; // 정수값을 저장할 컨테이너 생성
//
//	// 원소 추가
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//
//	// 벡터의 길이(크기)
//	cout << "vec의 크기 : " << vec.size() << endl;
//
//	// 전체 출력
//	// 순서가 있는 자료형일때 출력
//	for (int i = 0; i < vec.size(); i++) {
//		cout << vec[i] << " ";
//	}
//	cout << endl;
//
//	// 순서가 있거나 없는 경우 포함 - 반복자 사용
//	// iterator 사용
//
//	vector<int>::iterator it = vec.begin();
//
//	// vec에 저장된 원소 출력
//	cout << *(it + 0) << endl; // 벡터의 처음 주소
//	cout << *(it + 1) << endl;
//	cout << *(it + 2) << endl;
//
//	// 1번 위치의 20을 50으로 변경(수정)
//	vec[1] = 50;
//
//	// 2번 위치의 30을 삭제
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 30) { // 원소의 값이 30이면
//			vec.erase(it); // 삭제
//			break;
//		}
//	}
//
//	cout << "vec의 원소 전체 출력\n";
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << endl;
//	}
//
//	return 0;
//}