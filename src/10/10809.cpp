/**
 * 10809. 알파벳 찾기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> S;

    for_each(alphabet.begin(), alphabet.end(), [S](const char& c) {
        cout << (int)S.find(c) << ' ';
    });
}
