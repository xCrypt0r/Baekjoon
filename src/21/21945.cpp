/**
 * 21945. Palindromes
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,024 KB
 * 소요 시간: 152 ms
 * 해결 날짜: 2021년 11월 10일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    string num;
    long long sum = 0;

    while (n--)
    {
        cin >> num;

        bool is_palindrome = true;

        for (int i = 0; i < num.length() / 2; i++)
        {
            if (num[i] != num[num.length() - 1 - i])
            {
                is_palindrome = false;

                break;
            }
        }

        if (is_palindrome)
        {
            sum += stoi(num);
        }
    }

    cout << sum << endl;
}