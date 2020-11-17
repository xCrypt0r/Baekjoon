/**
 * 10886. 0 = not cute / 1 = cute
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    bool is_cute;
    int count = 0, count2 = 0;

    cin >> N;

    while (N--)
    {
        cin >> is_cute;

        (is_cute ? count : count2)++;
    }

    cout << "Junhee is " << (count > count2 ? "cute" : "not cute") << "!";
}
