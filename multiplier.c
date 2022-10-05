#include<stdio.h>

int main(){
    int T, n;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d",&n);
        printf("Case %d: ",i+1);
        for (int j = 1; j <= n ; j++)
        {
            if (n%j == 0)
            {
                printf("%d ",j);
            }
            
        }
        
    }
    
    return 0;
}