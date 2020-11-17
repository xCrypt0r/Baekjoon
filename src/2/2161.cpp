/**
 * 2161. 카드1
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    queue<int> cards;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cards.push(i);
    }

    while (!cards.empty())
    {
        cout << cards.front() << " ";

        cards.pop();

        if (!cards.empty())
        {
            cards.push(cards.front());
            cards.pop();
        }
    }
}
