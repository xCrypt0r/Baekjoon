/**
 * 2908. 상수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

void reverse_number(int& num);

int main()
{
    int A, B;

    cin >> A >> B;

    reverse_number(A);
    reverse_number(B);

    cout << (A > B ? A : B) << endl;
}

void reverse_number(int& num)
{
    int res = 0;

    while (num != 0)
    {
        res = res * 10 + num % 10;
        num /= 10;
    }

    num = res;
}
