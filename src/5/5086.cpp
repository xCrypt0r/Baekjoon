/**
 * 5086. 배수와 약수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 28일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
        }

        cout << (a % b == 0 ? "multiple" : b % a == 0 ? "factor" : "neither") << "\n";
    }
}
