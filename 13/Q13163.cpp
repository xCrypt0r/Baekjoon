#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string nickname;

    cin >> N;
    cin.ignore();

    while (N--)
    {
        bool is_first = true;

        getline(cin, nickname);

        for (const auto& c : nickname)
        {
            if (is_first)
            {
                if (c == ' ')
                {
                    is_first = false;

                    cout << "god";
                }
            }
            else
            {
                if (c != ' ')
                {
                    cout << c;
                }
            }
        }

        cout << "\n";
    }
}
