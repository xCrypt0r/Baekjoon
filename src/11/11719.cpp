/**
 * 11719. 그대로 출력하기 2
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    for (int i = 0; i < 100 && !cin.eof(); ++i)
    {
        getline(cin, s);

        cout << s << '\n';
    }
}
