/**
 * 5575. 타임 카드
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>

using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2;
    int h, m, s;

    for (int i = 0; i < 3; ++i)
    {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        if (s1 > s2)
        {
            m2--;
            s2 += 60;
        }

        s = s2 - s1;

        if (m1 > m2)
        {
            h2--;
            m2 += 60;
        }

        m = m2 - m1;
        h = h2 - h1;

        cout << h << " " << m << " " << s << "\n";
    }
}
