#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string A, B;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        getline(cin, A, ',');
        getline(cin, B);
        cout << stoi(A) + stoi(B) << '\n';
    }
}
