/**
 * 10825. 국영수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 6,684 KB
 * 소요 시간: 60 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Student
{
    string name;
    int korean;
    int english;
    int math;

    bool operator<(const Student& student)
    {
        if (korean < student.korean)
        {
            return false;
        }
        else if (korean == student.korean)
        {
            if (english > student.english)
            {
                return false;
            }
            else if (english == student.english)
            {
                if (math < student.math)
                {
                    return false;
                }
                else if (math == student.math)
                {
                    if (name > student.name)
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;

    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].name >> students[i].korean >> students[i].english >> students[i].math;
    }

    sort(students.begin(), students.end());

    for (int i = 0; i < N; ++i)
    {
        cout << students[i].name << '\n';
    }
}
