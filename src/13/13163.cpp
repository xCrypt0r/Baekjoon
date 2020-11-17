/**
 * 13163. 닉네임에 갓 붙이기
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string nickname;

    cin >> N;
    cin.ignore();

    while (N--)
    {
        bool is_first = true;

        getline(cin, nickname);

        for (const auto& c : nickname)
        {
            if (is_first)
            {
                if (c == ' ')
                {
                    is_first = false;

                    cout << "god";
                }
            }
            else
            {
                if (c != ' ')
                {
                    cout << c;
                }
            }
        }

        cout << "\n";
    }
}
