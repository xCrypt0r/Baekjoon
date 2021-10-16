#include <stdio.h>

int main()
{
    char S[200001];
    int N;
    int flag = 0;

    scanf("%d%s", &N, S);

    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'J' || S[i] == 'A' || S[i] == 'V')
        {
            continue;
        }

        printf("%c", S[i]);

        flag = 1;
    }

    if (flag == 0)
    {
        printf("nojava");
    }
}