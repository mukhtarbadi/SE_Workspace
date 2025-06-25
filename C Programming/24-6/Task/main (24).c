#include <stdio.h>
#include<conio.h>

void main()
{
    int i, j, n = 5;
    int num;

    for(i = 1; i <= n; i++)
    {
        num = i * i;
        
        for(j = 1; j <= n - i; j++)
            
            printf(" ");
        
        for(j = 1; j <= i; j++)
            
            printf("%d", num);
        
        printf("\n");
    }
  
    
    getch();
}