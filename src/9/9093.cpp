/**
 * 9093. 단어 뒤집기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,044 KB
 * 소요 시간: 24 ms
 * 해결 날짜: 2020년 8월 27일
 */

#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string S, buffer;

    cin >> T;
    cin.ignore();

    while (T--)
    {
        getline(cin, S);

        istringstream ss(S);

        while (getline(ss, buffer, ' '))
        {
            reverse(buffer.begin(), buffer.end());

            cout << buffer << " ";
        }

        cout << "\n";
    }
}
