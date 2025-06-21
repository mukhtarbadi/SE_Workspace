#include<stdio.h>
#include<conio.h>

    void main()
    {
    
    int choice;
    float area,base,height,lenght,breadth,radius;
    float P,R,N,SI;
    float PI = 3.14;
    
    printf("------Menu-----");
    printf("\n 1.Area Of Triangle");
    printf("\n 2.Area Of Rectangle");
    printf("\n 3.Area Of Circle");
    printf("\n 4.Simple Interest");
    printf("\n Enter Your Choice(1-4) : ");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        printf("Enter Base Of The Triangle : ");
        scanf("%f",&base);
        
        printf("Enter height Of The Triangle : ");
        scanf("%f",&height);
        
        area = 0.5*base*height;
        
        printf("\n Area Of Triangle = %f",area);
    }
    else if(choice==2)
    {
        printf("Enter Lenght Of The Rectangle : ");
        scanf("%f",&lenght);
        
        printf("Enter Breadth Of The Rectangle : ");
        scanf("%f",&breadth);
        
        area = lenght*breadth;
        
        printf("\n Area Of Rectangle = %f",area);
    }
    else if(choice==3)
    {
        printf("Enter Radius Of The Circle : ");
        scanf("%f",&radius);
        
        area = PI*radius*radius;
        
        printf("\n Area Of Circle = %f",area);
        
    }
    else if(choice==4)
    {
        printf("Enter Price(P) : ");
        scanf("%f",&P);
        
        printf("Enter Rate(R) : ");
        scanf("%f",&R);
        
        printf("Enter Time In Years(N) : ");
        scanf("%f",&N);
        
        SI = P*R*N/100;
        
        printf("Simple Interest = %f",SI);
        
    }
    else
    {
        printf("\n Invalid Choice! Please Enter 1 to 4");
    }
    
      
      getch();
        
    }