#include<iostream>
using namespace std;

class Tops
{
    //data member
    public:
    int id;
    string name;
    
    //method
    void display()
    {
         cout<<"Your id is: "<<id<<endl;
         cout<<"Your Name is : "<<name<<endl;    
    }
    
};
int main()
{   
    
    //object
    //Tops t1;
    Tops t1 = Tops();
    
    t1.id=101;
    t1.name="Mukhtar";
    
    Tops t2 = Tops();
    
    t2.id=102;
    t2.name="Danish";
    
    Tops t3 = Tops();
    
    t3.id=103;
    t3.name="Faiz";
    
    Tops t4 = Tops();
    
    t4.id=104;
    t4.name="Taukir";
    
    t1.display();
    t2.display();
    t3.display();
    t4.display();
    
   
    
     return 0;
}