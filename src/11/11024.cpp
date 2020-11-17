/**
 * 11024. 더하기 4
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,044 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <sstream>
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

    while (N--)
    {
        string nums, buffer;
        int sum = 0;

        getline(cin, nums);

        istringstream ss(nums);

        while (getline(ss, buffer, ' '))
        {
            sum += stoi(buffer);
        }

        cout << sum << "\n";
    }
}
