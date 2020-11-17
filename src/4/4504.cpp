/**
 * 4504. 배수 찾기
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
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num;
    
    cin >> n;

    while (true)
    {
        cin >> num;

        if (num == 0)
        {
            break;
        }

        if (num % n == 0)
        {
            cout << num << " is a multiple of " << n << "." << "\n";
        }
        else
        {
            cout << num << " is NOT a multiple of " << n << "." << "\n";
        }
    }
}
