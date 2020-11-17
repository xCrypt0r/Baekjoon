/**
 * 4458. 첫 글자를 대문자로
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 27일
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    
    cin >> N;
    cin.ignore();

    string S[N];

    for (int i = 0; i < N; ++i)
    {
        getline(cin, S[i]);
    }

    for_each(S, S + N, [](string& s) {
        s[0] = toupper(s[0]);
        cout << s << "\n";
    });
}
