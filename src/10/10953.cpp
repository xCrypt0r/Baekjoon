/**
 * 10953. A+B - 6
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string A, B;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        getline(cin, A, ',');
        getline(cin, B);
        cout << stoi(A) + stoi(B) << '\n';
    }
}
