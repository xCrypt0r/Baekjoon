/**
 * 15813. 너의 이름은 몇 점이니?
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 26일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    string name;
    int score = 0;

    cin >> N >> name;

    for (int i = 0; i < N; ++i)
    {
        score += name[i] - 64;
    }

    cout << score;
}
