#include <iostream>
#include <stdexcept>
#include "linkedList.h"


using namespace std;

int main()
{
    linkedList l;
    l.Insert(55);
    l.Insert(20);
    l.Insert(5);
    l.Insert(15) ;
    l.Insert(10);


    cout<<"\nprint list"<<endl;
    l.display();
    cout<<endl;

    l.BubbleSort();
    cout<<"\nPrint list after Sort"<<endl;
    l.display();


    l.Remove(15);
    cout<<"\n\nprint list after remove 15"<<endl;
    l.display();
    cout<<endl;

    l.insertAfter(50, 5);
    cout<<"\ninsert 50 after 5(first):" <<endl;
    l.display();
    cout<<endl;
    l.insertAfter(70, 10);
    cout<<"\ninsert 70 after 10 (middle) :" <<endl;
    l.display();
    cout<<endl;
    l.insertAfter(100, 55);
    cout<<"\ninsert 100 after 55(last) :" <<endl;
    l.display();
    cout<<endl;

    cout<<"\ninsert 100 after 1000 (not found) :" ;
    l.insertAfter(100, 1000);
    cout<<endl;

    l.BubbleSort();
    cout<<"\n\nPrint list after Sort"<<endl;
    l.display();

    return 0;
}

