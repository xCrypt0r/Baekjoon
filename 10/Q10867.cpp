#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N, num;
    set<int> s;

    cin >> N;

    while (N--)
    {
        cin >> num;

        s.insert(num);
    }

    for (const auto& n : s)
    {
        cout << n << " ";
    }
}
