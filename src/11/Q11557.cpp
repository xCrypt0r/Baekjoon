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
