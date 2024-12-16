#include <iostream>
#include "Stack.h"
#include "StackArr.h"

using namespace std;

int main()
{
    Stack s ;

    cout<<"print Empty Stack : ";
    int data;
    s.Dispaly();


    try
    {
        s.peak(data);
        cout<<"\nthe peak of data is : "<<data <<endl;
    }
    catch(const Exception &e)
    {
        cout<<"\nthe peak of data is : ";
        cerr<<e.name;
    }



    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    cout<< "\nthe stack is : ";
    s.Dispaly();

    try
    {
        s.peak(data);
        cout<<"\nthe peak of data is : "<<data <<endl;
    }
    catch(const Exception &pp)
    {
        cerr<<pp.name;
    }



    try
    {
        s.pop(data);
        cout<< "\nthe poped element is: "<<data<< "\n" ;
        s.pop(data);
        cout<< "\nthe poped element is: "<<data<< "\n" ;
        s.pop(data);
        cout<< "\nthe poped element is: "<<data<< "\n" ;
        s.pop(data);
        cout<< "\nthe poped element is: "<<data<< "\n" ;
        s.pop(data);
        cout<< "\nthe poped element is: "<<data<< "\n" ;

    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    ///
    cout<< "\n\n************************Stack with Array********************************\n\n"<<endl;
    StackArr S1(3);

    try
    {
        cout << "print empty stack :   ";
        S1.Display();
//        cout << "\npop empty stack :   ";
//        S1.pop();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    try
    {

        cout << "\npeak empty stack :   ";
        S1.Peak();

    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }
    try
    {
        cout << "\npop empty stack :   ";
        S1.pop();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    S1.push(10);
    S1.push(20);
    S1.push(30);
    cout << "\nContents of S1:\n";
    S1.Display();
     try
    {

        cout << "peak empty stack :   ";
        cout <<S1.Peak()<<endl;

    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    try
    {
        cout << "1st pop:" << S1.pop()<<endl;
        cout << "2nd pop:" << S1.pop()<<endl;
        cout << "3rd pop:" << S1.pop()<<endl;
        cout << "4th pop:" << S1.pop()<<endl;
    }

    catch(const Exception &e)
    {
        cout<<e.name;
    }







    return 0;
}
