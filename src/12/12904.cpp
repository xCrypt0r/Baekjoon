/**
 * 12904. A와 B
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,024 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 11월 13일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S, T;
    bool flag = false;

    cin >> S >> T;

    while (T.size())
    {
        char c = T[T.size() - 1];

        T.pop_back();

        if (c == 'B')
        {
            reverse(T.begin(), T.end());
        }

        if (S == T)
        {
            flag = true;

            break;
        }
    }

    cout << flag << endl;
}