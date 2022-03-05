#include<stdio.h>
int main()
{
    int i,num;
    while (1)
    {
       scanf("%d",&num);
       if (num==0) break;
       printf("1");
       
       for (i = 2; i <= num; i++)
    
        printf(" %d",i);
        printf("\n");
    
    
    
    
    }
    
    return 0;
}