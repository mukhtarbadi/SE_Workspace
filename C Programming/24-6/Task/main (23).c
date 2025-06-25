#include <stdio.h>
#include<conio.h>

void main()
{
    int i, j, n = 8;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            
            printf(" ");
        
        for(j = 1; j <= i; j++)
            
            printf("%c", 'A' + i - 1);
        
        printf("\n");
    }
  
    
    getch();
}