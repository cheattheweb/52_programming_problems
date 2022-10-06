#include <stdio.h>

int main()
{
    int T, N, count, k;
    long long sum;
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
        //     count = 0;
        //     k = 10;
        //     while (1)
        //     {
        //         if (sum / k == 0)
        //         {
        //             ++count;
        //             k *= 10;
        //         }else{
        //             break;
        //         }
        //     }

        //     printf("%d",count);
        // }

        return 0;
    }