/**
 * 5524. 입실 관리
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 26일
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
    string name;

    cin >> N;

    while (N--)
    {
        cin >> name;
        
        transform(name.begin(), name.end(), name.begin(), [](char c) {
            return tolower(c);
        });

        cout << name << "\n";
    }
}
