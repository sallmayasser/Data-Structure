#ifndef STACK_H
#define STACK_H
#include "Node.h"
#include "Exception.h"
using namespace std;

class Stack
{
public:
    Node * Tos ;
    Stack()
    {
        Tos=NULL;
    }
    void push(int _data)
    {
        Node * newNode = new Node (_data);
        if(Tos == NULL)
        {
            Tos = newNode;
            return;
        }
        newNode->prev = Tos;
        Tos=newNode;

    }
    void pop(int &data)
    {
        if(Tos==NULL)
        {
            Exception e(101,"stack is empty");
            throw e;
        }
        else
        {
            Node * temp = Tos;
            Tos= temp->prev;
            data=temp->data;

            delete temp;
        }

    }

    void Dispaly()
    {
        if(Tos==NULL)
        {
            cout << "stack is empty"<<endl;
            // return 0 ;
        }

        Node *current = Tos;
        //data=Tos->data;

        while(current!=NULL)
        {
            cout << current->data << "\t";
            current = current->prev;
            //return 1 ;
        }
    }

    void peak (int &data)
    {
        if(Tos==NULL)
        {
            throw Exception(101,"stack is empty");
        }
        data=Tos->data;
    }
    ~Stack() {}



protected:

private:
};

#endif // STACK_H

