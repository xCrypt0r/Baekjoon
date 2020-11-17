/**
 * 5988. 홀수일까 짝수일까
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 11일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    string K;

    cin >> N;

    while (N--)
    {
        cin >> K;
        cout << (K[K.size() - 1] & 1 ? "odd" : "even") << "\n";
    }
}
