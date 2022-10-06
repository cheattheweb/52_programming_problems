#include <stdio.h>

int main()
{
    int T, N;
    long sum;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        sum = 1;
        for (int j = 1; j <= N; j++)
        {
            sum = sum * j;
        }

        printf("%ld", sum);
    }

    return 0;
}