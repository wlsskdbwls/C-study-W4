#include <iostream>
#include <cstdlib> 
/* 이 헤더파일에는 범용적으로 사용되는 여러가지 함수들을 모아 놓았다.
  예를 들면, 동적 할당 관련 함수, 난수 생성 함수, 정수의 연산 함수, 검색 및 정렬 함수 등*/
#include <ctime>
// 사용자가 시간을 읽을 수 있게끔 문자열로 변환하는 함수

using namespace std;
class Random  // Random이라는 클래스를 생성
{
    public:  // 모든 클래스 접근 가능

	Random();   
	int next();  // 멤버 함수
	int nextInRange(int x, int y);  //  출력할 정수의 범위는 x이상 y이하
};

Random::Random() 
{
	srand((unsigned)time(0)); //srand - 난수 생성을 위한 초기값을 설정
	                          // 시작할 때마다 다른 랜덤한 수를 나오게 하기 위해
}

int Random::next() 
{
	return rand(); // rand - 난수를 생성
}

int Random::nextInRange(int x, int y) 
{
	return rand() % (y - x + 1) + x;   // x이상 y이하의 개수 → (y - x + 1)
	                                   /* rand()를 (y - x + 1)로 나눈 나머지 + x를 하면,
	                                     x에서 y사이의 값이 나옴. */ 
}

int main()
{
	Random r;
	int i, n;

	cout << "-- 0에서 32767 까지의 랜덤 정수 10 개--" << endl;

	for ( i = 0; i < 10; ++i)  
	{
	    n = r.next();  // 0에서 32767 사이의 랜덤 정수
		cout << n << ' ';
	}

	cout << endl << endl << "== 2에서 4 까지의 랜덤 정수 10 개 ==" << endl;

	for ( i = 0; i < 10; ++i)
	{
	    n = r.nextInRange(2, 4);  // 2에서 4 사이의 랜덤 정수
		cout << n << ' '; 
	}

	cout << endl;
}