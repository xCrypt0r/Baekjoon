/**
 * 22015. 金平糖 (Konpeito)
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 13일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int candy[3];

    for (int i = 0; i < 3; ++i)
    {
        cin >> candy[i];
    }

    sort(candy, candy + 3, greater<int>());

    cout << candy[0] * 2 - candy[1] - candy[2] << endl;
}
