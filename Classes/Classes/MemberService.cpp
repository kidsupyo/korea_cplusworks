//# include <iostream>
//# include <string>
//using namespace std;
//
///*
//	회원 로그인 서비스
//*/
//class MemberService {
//public :
//	// 로그인 일치 여부(True/False)를 반환하는 함수
//	// 로그인 - 회원가입(id, password) -> id = Hangang, pwd = k1234
//	bool login(string id, string pwd) {
//		// 문자열을 비교하는 함수 - compare
//		if(id.compare("Hangang") == 0 && pwd.compare("k1234") == 0){
//			return true;
//		}
//		return false;
//};
//
//int main()
//{
//	MemberService service; //객체 생성
//	
//	bool result = service.login("Hangang", "k1234");
//	if (result) {
//		cout << "로그인 되었습니다.\n";
//	}
//	else {
//		cout << "아이디 또는 비밀번호가 잘못되었습니다" << endl;
//	}
//
//
//
//	return 0;
//}