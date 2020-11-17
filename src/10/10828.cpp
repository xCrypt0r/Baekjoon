/**
 * 10828. 스택
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 19일
 */

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string cmd;
    stack<int> s;

    cin >> N;

    for (; N > 0; --N)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            int num;

            cin >> num;

            s.push(num);
        }
        else if (cmd == "pop")
        {
            if (s.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << s.size() << "\n";
        }
        else if (cmd == "empty")
        {
            cout << (s.empty() ? 1 : 0) << "\n";
        }
        else if (cmd == "top")
        {
            cout << (s.empty() ? -1 : s.top()) << "\n";
        }
    }
}