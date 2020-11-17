/**
 * 5597. 과제 안 내신 분..?
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>

using namespace std;

int main()
{
    bool check[31] = { false, };
    int num;

    for (int i = 1; i <= 28; ++i)
    {
        cin >> num;

        check[num] = true;
    }

    for (int i = 1; i <= 30; ++i)
    {
        if (!check[i])
        {
            cout << i << "\n";
        }
    }
}
