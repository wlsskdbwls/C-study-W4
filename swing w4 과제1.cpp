#include <iostream>
#include <cstdlib> 
/* �� ������Ͽ��� ���������� ���Ǵ� �������� �Լ����� ��� ���Ҵ�.
  ���� ���, ���� �Ҵ� ���� �Լ�, ���� ���� �Լ�, ������ ���� �Լ�, �˻� �� ���� �Լ� ��*/
#include <ctime>
// ����ڰ� �ð��� ���� �� �ְԲ� ���ڿ��� ��ȯ�ϴ� �Լ�

using namespace std;
class Random  // Random�̶�� Ŭ������ ����
{
    public:  // ��� Ŭ���� ���� ����

	Random();   
	int next();  // ��� �Լ�
	int nextInRange(int x, int y);  //  ����� ������ ������ x�̻� y����
};

Random::Random() 
{
	srand((unsigned)time(0)); //srand - ���� ������ ���� �ʱⰪ�� ����
	                          // ������ ������ �ٸ� ������ ���� ������ �ϱ� ����
}

int Random::next() 
{
	return rand(); // rand - ������ ����
}

int Random::nextInRange(int x, int y) 
{
	return rand() % (y - x + 1) + x;   // x�̻� y������ ���� �� (y - x + 1)
	                                   /* rand()�� (y - x + 1)�� ���� ������ + x�� �ϸ�,
	                                     x���� y������ ���� ����. */ 
}

int main()
{
	Random r;
	int i, n;

	cout << "-- 0���� 32767 ������ ���� ���� 10 ��--" << endl;

	for ( i = 0; i < 10; ++i)  
	{
	    n = r.next();  // 0���� 32767 ������ ���� ����
		cout << n << ' ';
	}

	cout << endl << endl << "== 2���� 4 ������ ���� ���� 10 �� ==" << endl;

	for ( i = 0; i < 10; ++i)
	{
	    n = r.nextInRange(2, 4);  // 2���� 4 ������ ���� ����
		cout << n << ' '; 
	}

	cout << endl;
}