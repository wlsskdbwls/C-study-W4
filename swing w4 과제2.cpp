#include <iostream>
#include <string>
using namespace std;

class Student  // Student��� Ŭ������ ����
{
private: // �̸��� ��ȭ��ȣ�� private�� ����

	string name;  // �̸�
	string phone_num;   //��ȣ

public: // addPhone(), editPhone(), getPnum(), getName()�� public���� ����
	void addPhone();
	void editPhone();
	string getPnum();
	string getName();  

};

void Student::addPhone()  // ���ο� ��ȣ �߰��ϴ� �Լ�
{
	cout << "-- swing ��ȭ��ȣ�� --" << endl;
	cout << "�̸��� �Է��� �ּ��� >>";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >>" ;
	cin >> phone_num;
}

void Student::editPhone()   // ������ ��ȣ �����ϴ� �Լ�
{
	string n_name;
	cout << "�̸��� �Է��� �ּ��� >>";
	

	do 
	{
		cin >> n_name;
		if (name != n_name)
		{
			cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���. >>";

		}
	} while (name != n_name);

	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >>";
	cin >> phone_num;
}

string Student::getPnum()   // ��ȣ�� �ҷ����� �Լ�
{
	return phone_num;
}

string Student::getName()   // �̸��� �ҷ����� �Լ�
{
	return name;
}

int main()
{
	Student stu;
	stu.addPhone();

	int n;
	do  // n�� 3�� ���� ������ �ݺ�
	{
		cout << endl << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ���� >> ";
		cin >> n;  // n�� �Է¹���

		switch (n)   
		{
		case 1:  // ��ȭ��ȣ ��ȸ
			cout << stu.getName() << "::" << stu.getPnum() << endl;
			break;
		case 2:   // ��ȭ��ȣ ����
			stu.editPhone();			
		}
	} while (n != 3); 
}