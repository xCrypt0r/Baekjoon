/**
 * 10950. A+B - 3
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 8월 14일
 */

#include <iostream>

using namespace std;

int main()
{
	int n, a, b;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
		cin >> a >> b; 
		cout << a + b << endl;
    }
}
