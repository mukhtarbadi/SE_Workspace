#include <stdio.h>
#include<conio.h>

void main()
{
    
    int i,j,num;
    
    printf("Enter Any Number");
    scanf("%d",&num);//5
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            //printf("*");
            //printf("%d",i);
            printf("%d",j);
        }
        printf("\n");
         
    }
    
    getch();
}