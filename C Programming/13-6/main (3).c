#include<stdio.h>//header file
#include<conio.h>//header file
void main()//main function
{
   
   int maths=80,sci=70,guj=90,hin=78,eng=60,total,avg;
   
   total = maths+sci+guj+hin+eng;
   
   printf("\n Total is : %d ",total);
       
   avg = total/5;

   printf("\n Percentage is : %d ",avg);    
    
    getch();//terminate the program
}    