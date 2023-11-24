# include <stdio.h>
void main()
{
    int n,i,j;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",n-j+1);
        }
        printf("\n");

    }
    /*321
    321
    321*/
}