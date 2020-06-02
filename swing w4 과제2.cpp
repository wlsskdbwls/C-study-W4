#include <iostream>
#include <string>
using namespace std;

class Student  // Student라는 클래스를 생성
{
private: // 이름과 전화번호는 private로 설정

	string name;  // 이름
	string phone_num;   //번호

public: // addPhone(), editPhone(), getPnum(), getName()는 public으로 설정
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();  

};

void Student::addPhone()  // 새로운 번호 추가하는 함수
{
	cout << "-- swing 전화번호부 --" << endl;
	cout << "이름을 입력해 주세요 >>";
	cin >> name;
	cout << "전화번호를 입력해 주세요 >>" ;
	cin >> phone_num;
}

void Student::editPhone()   // 기존의 번호 수정하는 함수
{
	string n_name;
	cout << "이름을 입력해 주세요 >>";
	

	do 
	{
		cin >> n_name;
		if (name != n_name)
		{
			cout << "연락처가 존재하지 않습니다. 다시 입력해주세요. >>";

		}
	} while (name != n_name);

	cout << "변경할 전화번호를 입력해 주세요 >>";
	cin >> phone_num;
}

string Student::getPnum()   // 번호를 불러오는 함수
{
	return phone_num;
}

string Student::getName()   // 이름을 불러오는 함수
{
	return name;
}

int main()
{
	Student stu;
	stu.addPhone();

	int n;
	do  // n이 3이 나올 때까지 반복
	{
		cout << endl << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료 >> ";
		cin >> n;  // n을 입력받음

		switch (n)   
		{
		case 1:  // 전화번호 조회
			cout << stu.getName() << "::" << stu.getPnum() << endl;
			break;
		case 2:   // 전화번호 수정
			stu.editPhone();			
		}
	} while (n != 3); 
}