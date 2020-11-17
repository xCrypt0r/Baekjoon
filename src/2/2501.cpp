/**
 * 2501. 약수 구하기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 11일
 */

#include <iostream>

using namespace std;

int get_nth_factor(int n, int k);

int main()
{
    int N, K;

    cin >> N >> K;
    cout << get_nth_factor(N, K);
}

int get_nth_factor(int n, int k)
{
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0 && --k == 0)
        {       
            return i;
        }
    }

    return 0;
}
