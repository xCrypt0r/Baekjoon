/**
 * 2822. 점수 계산
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> score(8), temp, index;

    int sum = 0;

    for (int i = 0; i < 8; ++i)
    {
        cin >> score[i];
        temp.push_back(score[i]);
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 3; j < 8; ++j)
        {
            if (score[i] == temp[j])
            {
                sum += score[i];
                index.push_back(i + 1);
                continue;
            }
        }
    }

    cout << sum << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << index[i] << " ";
    }
}
