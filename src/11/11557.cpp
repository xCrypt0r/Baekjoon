/**
 * 11557. Yangjojang of The Year
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>
#include <algorithm>

using namespace std;

struct School
{
    string name;
    int drink;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    int max = 0, index;

    cin >> T;

    while (T--)
    {
        cin >> N;

        School *schools = new School[N];

        for (int i = 0; i < N; ++i)
        {
            cin >> schools[i].name >> schools[i].drink;

            if (schools[i].drink > max)
            {
                max = schools[i].drink;
                index = i;
            }
        }

        cout << schools[index].name << "\n";
    }
}
