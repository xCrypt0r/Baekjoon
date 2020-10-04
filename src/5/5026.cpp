#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string problem;

    cin >> N;

    while (N--)
    {
        cin >> problem;

        if (problem == "P=NP")
        {
            cout << "skipped" << "\n";
        }
        else
        {
            int pos = problem.find('+');
            int a = stoi(problem.substr(0, pos));
            int b = stoi(problem.substr(pos + 1));

            cout << a + b << "\n";
        }
    }
}
