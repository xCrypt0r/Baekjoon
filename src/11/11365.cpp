/**
 * 11365. !밀비 급일
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 27일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sentence;

    while (true)
    {
        getline(cin, sentence);

        if (sentence == "END")
        {
            break;
        }

        reverse(sentence.begin(), sentence.end());

        cout << sentence << "\n";
    }
}
