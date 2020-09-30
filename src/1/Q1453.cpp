#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N, num;
    set<int> s;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> num;

        s.insert(num);   
    }

    cout << N - s.size();
}
