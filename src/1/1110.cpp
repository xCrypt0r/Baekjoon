/**
 * 1110. 더하기 사이클
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 15일
 */

#include <iostream>

using namespace std;

int make_new_number(int n, int& cycle);

int main()
{
    int N, cycle = 0;

    cin >> N;

    int new_num = make_new_number(N, cycle);

    while (N != new_num)
    {
        new_num = make_new_number(new_num, cycle);
    }

    cout << cycle << endl;
}

int make_new_number(int n, int& cycle)
{
    cycle++;

    return (n % 10) * 10 + (n / 10 + n % 10) % 10;
}
