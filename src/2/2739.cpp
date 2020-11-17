/**
 * 2739. 구구단
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 14일
 */

#include <iostream>

using namespace std;

int main()
{
    int n;

	cin >> n;

	for (int i = 1; i <= 9; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
}
