#include <iostream>
#include "BinaryTree.h"
#include "Exception.h"
using namespace std;

int main()
{
    BinaryTree t1,t2 ;
    try
    {
        //  cout<<"1st Tree Max: "<<t1.Max()<<endl; // tree is empty
        t1.Insert(60);
        t1.Insert(80);
        t1.Insert(50);
        t1.Insert(55);
        t1.Insert(40);
        t1.Insert(70);
        t1.Insert(90);
        t1.Insert(30);
        t1.Insert(45);
        t1.Insert(95);
        t1.Insert(92);
        t1.Insert(91);
        cout<<"Display All Tree  :\n";
        t1.DisplayAll();
        cout<<endl;

        cout<<"Remove Leave element (45) :\n";
        t1.Remove(45);
//        t1.Remove(30);
//        t1.Remove(70);
        t1.DisplayAll();
        cout<<endl;

        cout<<"\nRemove node has Right only element (80):\n";
        t1.Remove(80);
        t1.DisplayAll();
        cout<<endl;

        cout<<"\nRemove node has left only element (95) :\n";
        t1.Remove(95);
        t1.DisplayAll();
        cout<<endl;

        cout<<"\nRemove node has left and Right element (50) :\n";
        t1.Remove(50);
        t1.DisplayAll();
        cout<<endl;

        cout<<"\nRemove Root Node (60):"<<endl;
        t1.Remove(60);
        t1.DisplayAll();
        cout<<endl;

        cout<<"\n********************************************************************************************\n";
        t2.Insert(55);
        t2.Insert(50);
        t2.Insert(40);
        cout<<"Display All Tree 2  :\n";
        t2.DisplayAll();
        cout<<endl;

        cout<<"\nRemove Root Node has only left child (55):"<<endl;
        t2.Remove(55);
        t2.DisplayAll();
        cout<<endl;

        cout<<"\n1st Tree Max: "<<t1.Max()<<endl;//90
        cout<<"1st Tree Min: "<<t1.Min()<<endl;//40

        cout<<"\n2nd Tree Max: "<<t2.Max()<<endl;//55
        cout<<"2nd Tree Min: "<<t2.Min()<<endl;//40

        cout<<"\nRemove Not found Node (1000) :   ";
        t1.Remove(1000);
        t1.DisplayAll();
        cout<<endl;

//        cout<<t1.getParentByData(55)<<endl;//50
//        cout<<t1.getParentByData(40)<<endl;//50
//        cout<<t1.getParentByData(70)<<endl;//80
//        cout<<t1.getParentByData(50)<<endl;//60
//        cout<<t1.getParentByData(90)<<endl;//80
        // cout<<t1.getParentByData(60)<<endl;//not have parent
        // cout<<t1.getParentByData(700)<<endl;//err



    }
    catch(const Exception &e)
    {
        cout<<e.name<<endl;
    }


    return 0;
}
