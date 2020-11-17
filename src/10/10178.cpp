/**
 * 10178. 할로윈의 사탕
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, candy, people;

    cin >> T;

    while (T--)
    {
        cin >> candy >> people;
        cout << "You get " << candy / people << " piece(s) and your dad gets " << candy % people << " piece(s).\n";
    }
}
