/**
 * 1259. 팰린드롬수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>

using namespace std;

int main()
{
    string num;
    bool is_palindrome;

    while (true)
    {
        cin >> num;

        if (num == "0")
        {
            break;
        }

        is_palindrome = true;

        for (int head = 0, tail = num.length() - 1; head <= tail; head++, tail--)
        {
            if (num[head] != num[tail])
            {
                is_palindrome = false;

                break;
            }
        }

        cout << (is_palindrome ? "yes" : "no") << "\n";
    }
}
