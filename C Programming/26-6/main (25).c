#include<stdio.h>
#include<conio.h>

//with para with return type
int cal(int a,int b)
{
    return a+b;
}

int main()
{
    printf("\n %d",cal(6,5));//call
    printf("\n %d",cal(5,5));
    printf("\n %d",cal(4,5));
    printf("\n %d",cal(3,5));
    
    
    return 0;
}