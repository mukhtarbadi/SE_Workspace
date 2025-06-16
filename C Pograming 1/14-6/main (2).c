#include<stdio.h>
#include<conio.h>

    void main()
    {
        int num1,num2;
        int add,sub,mul,div1,rem;
        
        
        printf("Enter Your Number 1 : ");
        scanf("%d",&num1);
        
        printf("Enter Your Number 2 : ");
        scanf("%d",&num2);
        
        add = num1+num2;
        sub = num1-num2;
        mul = num1*num2;
        div1 = num1/num2;
        rem = num1%num2;
        
        printf("\n Addition is : %d ",add);
        printf("\n Substraction is : %d ",sub);
        printf("\n Multiplication is : %d ",mul);
        printf("\n Division is : %d ",div1);
        printf("\n Remainder is : %d ",rem);
        
        getch();
    }