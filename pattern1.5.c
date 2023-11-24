# include <stdio.h>
void main()
{
    int n,i,j,count=1;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            printf("%d",count);
            count=count+1;
        }
        printf("\n");
    }
    /*
    123
    456
    789*/
}