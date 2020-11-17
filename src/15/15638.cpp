/**
 * 15638. No Description
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 10월 15일
 */

#include <iostream>

using namespace std;

int main()
{
	int n;
	bool is_prime = true;

	cin >> n;

	if (n > 2 && n % 2 == 0)
	{
	    is_prime = false;
	}

	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			is_prime = false;

			break;
		}
	}

	cout << (is_prime ? "Yes" : "No");
}