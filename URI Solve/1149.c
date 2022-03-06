#include<stdio.h>
int main()
{
    int i,j=0,a,n;
    scanf("%d %d",&a,&n);
    while (n<0 || n==0)
    {
        /* code */scanf("%d",&n);
    }
    for ( i = 0; i < n; i++)
    {
        /* code */j=j+a+i;
    }
    printf("%d\n",j);
    
    


    return 0;
}