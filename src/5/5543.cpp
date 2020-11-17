/**
 * 5543. 상근날드
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 15일
 */

#include <iostream>

using namespace std;

int main()
{
    int burgurs[3];
    int drinks[2];
    int cheapest_burgur = 2000;
    int cheapest_drink = 2000;

    for (int i = 0; i < 3; ++i)
    {
        cin >> burgurs[i];

        if (burgurs[i] < cheapest_burgur)
        {
            cheapest_burgur = burgurs[i];
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        cin >> drinks[i];

        if (drinks[i] < cheapest_drink)
        {
            cheapest_drink = drinks[i];
        }
    }

    cout << cheapest_burgur + cheapest_drink - 50 << endl;
}
