/**
 * 5026. 박사 과정
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 10일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string problem;

    cin >> N;

    while (N--)
    {
        cin >> problem;

        if (problem == "P=NP")
        {
            cout << "skipped" << "\n";
        }
        else
        {
            int pos = problem.find('+');
            int a = stoi(problem.substr(0, pos));
            int b = stoi(problem.substr(pos + 1));

            cout << a + b << "\n";
        }
    }
}
