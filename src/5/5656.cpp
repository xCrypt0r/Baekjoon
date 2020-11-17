/**
 * 5656. 비교 연산자
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 12 ms
 * 해결 날짜: 2020년 9월 9일
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, i;
    string oper;
    vector<bool> res;

    while (true)
    {
        cin >> a >> oper >> b;

        if (oper == "E")
        {
            break;
        }
        else if (oper == ">")
        {
            res.emplace_back(a > b);
        }
        else if (oper == ">=")
        {
            res.emplace_back(a >= b);
        }
        else if (oper == "<")
        {
            res.emplace_back(a < b);
        }
        else if (oper == "<=")
        {
            res.emplace_back(a <= b);
        }
        else if (oper == "==")
        {
            res.emplace_back(a == b);
        }
        else if (oper == "!=")
        {
            res.emplace_back(a != b);
        }
    }

    for (int i = 0; i < res.size(); ++i)
    {
        cout << "Case " << i + 1 << ": " << boolalpha << res[i] << "\n";
    }
}
