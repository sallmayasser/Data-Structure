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
    cout<<"\nprint list after sort"<<endl;
    l.display();


//
//    l.Remove(55);
//    cout<<"\nprint list after remove 55"<<endl;
//    l.display();
//    cout<<endl;
//
//    l.insertAfter(50, 5);
//    cout<<"\ninsert 50 after 5(first):" <<endl;
//    l.display();
//    cout<<endl;
//    l.insertAfter(70, 10);
//    cout<<"\ninsert 70 after 10 (middle) :" <<endl;
//    l.display();
//    cout<<endl;
//    l.insertAfter(100, 20);
//    cout<<"\ninsert 100 after 20 (last) :" <<endl;
//    l.display();
//    cout<<endl;
//
//    cout<<"\ninsert 100 after 1000 (not found) :" ;
//    l.insertAfter(100, 1000);
//    cout<<endl;

//
//
//    l.insertBefore(60,5);
//    cout<<"\ninsert 60 before 5 (first) :" <<endl;
//    l.display();
//    cout<<endl;
//    l.insertBefore(80,15);
//    cout<<"\ninsert 80 before 15 (middle) :" <<endl;
//    l.display();
//    cout<<endl;
//    l.insertBefore(90,20);
//    cout<<"\ninsert 90 before 20 (last) :" <<endl;
//    l.display();
//    cout<<endl;
//
//    cout<<"\ninsert 100 before 1000 (not found) :" ;
//    l.insertAfter(100, 1000);
//    cout<<endl;
//
//
//    int length= l.getCount();
//    cout << "\nthe length of linked list is : "<<length<<endl;
//
//
//    try
//    {
//        cout << "\nthe value of index 4: "<<l.GetDataByIndex(4)<<endl;
//        cout << "\nthe value of index 0 with []: "<<l[0]<<endl;
//
//        cout << "\n\nthe value of index 12: ";
//        l.GetDataByIndex(12);
//    }
//    catch (const std::out_of_range &e)
//    {
//        cerr<<"Error ("<<e.what()<<")"<<endl;
//    }
//
//
//

    return 0;
}

