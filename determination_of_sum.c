#include <stdio.h>

int main()
{
    int T, N, sum;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        sum = 0;
        scanf("%d", &N);
        sum += N % 10;
        sum = sum + N / 10000;
        printf("Sum = %d\n",sum);
    }
    return 0;
}