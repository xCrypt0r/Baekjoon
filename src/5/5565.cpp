/**
 * 5565. 영수증
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>

using namespace std;

int main()
{
    int sum, price;

    cin >> sum;

    for (int i = 0; i < 9; ++i)
    {
        cin >> price;

        sum -= price;
    }

    cout << sum;
}
