#include <stdio.h>

int main()
{
    int t, i;
    int x, y;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &i);

        x = i / 100;
        y = i % 100;

        puts((x * x + y * y) % 7 == 1 ? "YES" : "NO");
    }
}