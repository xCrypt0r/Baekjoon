/**
 * 3059. 등장하지 않는 문자의 합
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    string S;

    cin >> T;

    while (T--)
    {
        bool appeared[26] = { false };
        int sum = 0;

        cin >> S;

        for (const auto& c : S)
        {
            appeared[c - 65] = true;
        }

        for (int i = 0; i < 26; ++i)
        {
            if (!appeared[i])
            {
                sum += i + 65;
            }
        }

        cout << sum << "\n";
    }
}
