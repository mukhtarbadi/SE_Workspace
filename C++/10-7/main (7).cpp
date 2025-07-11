#include<iostream>
using namespace std;

class Tops
{
    // data member
    public:
        int id;
        string name;

        // method
        void display()
        {
            cout << "Your id is: " << id << endl;
            cout << "Your Name is: " << name << endl;
        }
};

int main()
{
    Tops t1;

    cout << "Enter your id: ";
    cin >> t1.id;

    cout << "Enter your name: ";
    cin >> t1.name;

    t1.display();

    return 0;
}