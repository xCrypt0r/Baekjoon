#include <iostream>

using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2;
    int h, m, s;

    for (int i = 0; i < 3; ++i)
    {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        if (s1 > s2)
        {
            m2--;
            s2 += 60;
        }

        s = s2 - s1;

        if (m1 > m2)
        {
            h2--;
            m2 += 60;
        }

        m = m2 - m1;
        h = h2 - h1;

        cout << h << " " << m << " " << s << "\n";
    }
}
