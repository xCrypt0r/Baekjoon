#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    int count = 0;
    const string fbi = "FBI";

    for (int i = 0; i < 5; ++i)
    {
        cin >> name;

        if (name.find(fbi) != string::npos)
        {
            cout << i + 1 << "\n";
            count++;
        }
    }

    if (count == 0)
    {
        cout << "HE GOT AWAY!" << "\n";
    }
}
