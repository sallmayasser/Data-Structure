#include <iostream>
#include "QueueList.h"
#include "QueueArr.h"
using namespace std;

int main()
{
    QueueList ql ;
    cout <<"Display the Empty Queue :";
    ql.display();

    ql.enQueue(5);
    ql.enQueue(10);
    ql.enQueue(15);
    cout <<"\nDisplay the Queue :";
    ql.display();

    try
    {
        cout <<"\nthe front is:  "<<ql.Getfront();
        cout <<"\nDisplay the Queue after front:";
        ql.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    try
    {
        cout <<"\nthe rear is:  "<<ql.getrear();
        cout <<"\nDisplay the Queue after rear:";
        ql.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    try
    {
        int data ;
        ql.deQueue(data);
        cout <<"\n1st deQueue : "<<data<<endl;

        ql.deQueue(data);
        cout <<"\n2nd deQueue : "<<data<<endl;

        ql.deQueue(data);
        cout <<"\n3rd deQueue : "<<data<<endl;

        ql.deQueue(data);
        cout <<"\n4th deQueue : "<<data<<endl;
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }
    try
    {
        cout <<"the front"<<ql.Getfront();
        cout <<"\nDisplay the Queue after front:";
        ql.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    try
    {
        cout <<"\nthe rear"<<ql.getrear();
        cout <<"\nDisplay the Queue after rear:";
        ql.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    cout<<"**************************array queue************************\n\n";
    Queue qArr(5);
    cout <<"Display the Empty Queue :";
    qArr.display();

    qArr.EnQueue(5);
    qArr.EnQueue(10);
    qArr.EnQueue(15);
    qArr.EnQueue(20);
    qArr.EnQueue(25);
    cout <<"\nDisplay the Queue :";
    qArr.display();

    try
    {
        cout <<"\nthe front is:  "<<qArr.Getfront();
        cout <<"\nDisplay the Queue after front:";
        qArr.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    try
    {
        cout <<"\nthe rear is:  "<<qArr.getrear();
        cout <<"\nDisplay the Queue after rear:";
        qArr.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }


    try
    {
        int data ;
        qArr.DeQueue(data);
        cout <<"\n1st deQueue : "<<data<<endl;

        qArr.DeQueue(data);
        cout <<"\n2nd deQueue : "<<data<<endl;

        qArr.DeQueue(data);
        cout <<"\n3rd deQueue : "<<data<<endl;
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }
  qArr.EnQueue(30);
    cout <<"\nDisplay the Queue :";
    qArr.display();


    try
    {
        cout <<"the front"<<qArr.Getfront();
        cout <<"\nDisplay the Queue after front:";
        qArr.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }

    try
    {
        cout <<"\nthe rear"<<qArr.getrear();
        cout <<"\nDisplay the Queue after rear:";
        qArr.display();
    }
    catch(const Exception &e)
    {
        cout<<e.name;
    }


    return 0;
}
