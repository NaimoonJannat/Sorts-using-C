#include<stdio.h>
int main()
{
    int n, row, col;
    printf("N=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        //printf space
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
         //printf number
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");

    }
    for(row=n-1;row>=1;row--)
    {
        //printf space
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
         //printf number
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");

    }
    return 0;
}
