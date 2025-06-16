#include<stdio.h>
#include<conio.h>

    void main()
    {
        int i,p,r,n,total;
     
     
     printf("Enter Pri Is : ");
     scanf("%d",&p);
     
     printf("Enter Rate Is : ");
     scanf("%d",&r);
     
     printf("Enter Years Is : ");
     scanf("%d",&n);
     
     i=p*r*n/100;
     
     printf("\n Your Intrest Is : %d",i);
     
     total=i+p;
     
     printf("\n Your Total Amount Is : %d",total);
     
     getch();
    }