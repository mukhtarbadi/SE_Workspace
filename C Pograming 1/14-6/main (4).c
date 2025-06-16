#include<stdio.h>
#include<conio.h>

    void main()
    {
        int maths,guj,hin,eng,sci,avg,total;
        
        printf("Enter Your Maths Marks : ");
        scanf("%d",&maths);
        
        printf("Enter Your Gujrati Marks : ");
        scanf("%d",&guj);
        
        printf("Enter Your Hindi Marks : ");
        scanf("%d",&hin);
        
        printf("Enter Your English Marks : ");
        scanf("%d",&eng);
        
        printf("Enter Your Science Marks : ");
        scanf("%d",&sci);
        
        total = maths+guj+hin+eng+sci;
        
        printf("\n Your Total Marks Is : %d",total);
        
        avg = total/5;
        
        printf("\n Your Percentage Is : %d",avg);
        
        getch();
        
    }