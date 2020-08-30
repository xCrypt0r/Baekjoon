#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
    cin.ignore();

    while (N--)
    {
        string nums, buffer;
        int sum = 0;

        getline(cin, nums);

        istringstream ss(nums);

        while (getline(ss, buffer, ' '))
        {
            sum += stoi(buffer);
        }

        cout << sum << "\n";
    }
}
