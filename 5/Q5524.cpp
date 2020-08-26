#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string name;

    cin >> N;

    while (N--)
    {
        cin >> name;
        
        transform(name.begin(), name.end(), name.begin(), [](char c) {
            return tolower(c);
        });

        cout << name << "\n";
    }
}
