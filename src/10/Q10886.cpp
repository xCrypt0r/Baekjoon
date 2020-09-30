#include <iostream>

using namespace std;

int main()
{
    int N;
    bool is_cute;
    int count = 0, count2 = 0;

    cin >> N;

    while (N--)
    {
        cin >> is_cute;

        (is_cute ? count : count2)++;
    }

    cout << "Junhee is " << (count > count2 ? "cute" : "not cute") << "!";
}
