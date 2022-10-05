#include <stdio.h>

int main()
{

    int T, N, result;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        result = 0;
        for (int j = 1; j <= N; j++)
        {
            if (j * j == N)
            {
                result = 1;
                break;
            }
        }

        if (result == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}