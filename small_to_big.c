#include <stdio.h>

int main()
{
    int T, i, j, temp;
    int num[3] = {};
    i = 0;
    scanf("%d", &T);
    while (i < T)
    {
        j = 0;
        while (j < 3)
        {
            scanf("%d", &num[j]);
            j++;
        }
        for (int l = 0; l < 3; l++)
        {

            for (int k = 0; k < 3; k++)
            {
                if (num[l] < num[k])
                {
                    temp = num[l];
                    num[l] = num[k];
                    num[k] = temp;
                }
            }
        }

        printf("Case %d: ", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%d ", num[j]);
        }

        i++;
    }

    return 0;
}