#include <iostream>

using namespace std;

int main()
{
    int N;
    int student, apple;
    int rest = 0;

    cin >> N;

    while (N--)
    {
        cin >> student >> apple;

        while ((apple -= student) >= 0);

        rest += apple + student;
    }

    cout << rest;
}
