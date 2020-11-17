/**
 * 4673. 셀프 넘버
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 19일
 */

#include <iostream>
#define SIZE 10001

using namespace std;

int d(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    bool arr[SIZE];
    int temp;

    for (int i = 1; i< SIZE; ++i)
    {
        arr[i] = true;
    }

    for (int i = 1; i< SIZE; ++i)
    {
        temp = d(i);

        if (temp < SIZE)
        {
            arr[temp] = false;
        }
    }

    for (int i = 1; i < SIZE; ++i)
    {
        if (arr[i])
        {
            cout << i << "\n";
        }
    }
}

int d(int n)
{
    int sum = n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}