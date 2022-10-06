#include <stdio.h>

int main()
{
    int T;
    float r1, r2, B, result1, result2;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%f", &r1);
        scanf("%f", &r2);
        scanf("%f", &B);

        result1 = r2 / (50 - (B / 6));
        result2 = ((r1 + 1) - r2) / (B / 6);

        printf("%f %f", result1, result2);
    }

    return 0;
}