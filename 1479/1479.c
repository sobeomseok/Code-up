#include <stdio.h>

int main(void)
{
    int n, m, x=1, num, i, j, a[101][101]={0,};
    scanf("%d %d", &n, &m);
    
    for(num=1; num<=m+n; num++)
    {
       for(j=m; j>0; j--)
       {
           for(i=1; i<=n; i++)
           {
               if(i+m-j==num)
               {
                   a[i][j]=x++;
                   break;
               }
           }
       }
    }
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
