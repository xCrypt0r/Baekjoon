/**
 * 4153. 직각삼각형
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    const int size = 3;
    int len[size];
    bool is_right;

    while (true)
    {
        is_right = false;

        cin >> len[0] >> len[1] >> len[2];

        if (all_of(len, len + size, [](int l) { return l == 0; }))
        {
            break;
        }

        stable_sort(len, len + size);

        if (len[0] * len[0] + len[1] * len[1] == len[2] * len[2])
        {
            is_right = true;
        }

        cout << (is_right ? "right" : "wrong") << "\n";
    }
}
