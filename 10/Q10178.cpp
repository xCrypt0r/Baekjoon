#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, candy, people;

    cin >> T;

    while (T--)
    {
        cin >> candy >> people;
        cout << "You get " << candy / people << " piece(s) and your dad gets " << candy % people << " piece(s).\n";
    }
}
