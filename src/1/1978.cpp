/**
 * 1978. 소수 찾기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,996 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num);

int main()
{
    int N, num;
    int count = 0;

    cin >> N;

    for (; N > 0; --N)
    {
        cin >> num;

        if (isPrime(num))
        {
            count++;
        }
    }

    cout << count;
}

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}