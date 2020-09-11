#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;

    cin >> T;

    while (T--)
    {
        cin >> N;

        int C, credits = 0;
        double G, gpa = 0.0;

        while (N--)
        {
            cin >> C >> G;

            gpa += C * G;
            credits += C;
        }
        
        gpa /= credits;

        cout << fixed;
        cout.precision(1);
        cout << credits << " " << gpa << "\n";
    }
}
