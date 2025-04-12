//# include <iostream>
//# include <string>
//# include <vector>
//# include <map>
//using namespace std;
//
///*
//	상속 - 기존에 있던 클래스를 사용해서 새로운 클래스를 만드는 것이다. (부모클래스 <- 자식클래스)
//*/
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	// 설정자(setter)
//	void setName(string name) {
//		this->name = name;
//	}
//	void setAge(int age) {
//		this->age = age;
//	}
//
//	// 접근자(getter)
//	string getName() { return name; }
//	int getAge() { return age; }
//};
//
//// 사람을 상속한 학생 클래스 정의
//class Student : public Person { // Person이 부모, Student가 자녀 클래스
//private:
//	int studentId; // 학번
//public:
//	void setstudentId(int studentId) {
//		this->studentId = studentId;
//	}
//	int getStudentId() { return studentId; }
//};
//
//int main()
//{
//	// 사람 1명이 생성
//	Person p1;
//	p1.setName("광개토대왕");
//	p1.setAge(40);
//
//	// 사람의 정보
//	cout << "이름: " << p1.getName() << endl;
//	cout << "나이: " << p1.getAge() << endl;
//
//	// 자식 1명 생성
//	Student s1;
//	s1.setName("장수왕");
//	s1.setAge(97);
//	s1.setstudentId(1000);
//
//	// 학생의 정보
//	cout << "이름: " << s1.getName() << endl;
//	cout << "나이: " << s1.getAge() << endl;
//
//
//
//	return 0;
//}