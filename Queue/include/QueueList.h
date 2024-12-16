#ifndef QUEUELIST_H
#define QUEUELIST_H
#include "Exception.h"
#include "Node.h"
#include <iostream>

using namespace std;

class QueueList
{
public:
    Node * front;
    Node *rear;

    QueueList()
    {
        front = rear = NULL;
    }
    void enQueue(int _data)
    {
        Node * newNode = new Node (_data);
        if(front==NULL && rear==NULL)
        {
            front =rear= newNode;
            return;
        }
        rear->next = newNode;
        rear=newNode;
    }
    void deQueue(int&data)
    {
        if (front==NULL)
        {
            Exception e(101,"Queue is empty(dequeue)\n");
            throw e;
        }
        data=front->data;
        Node * temp = front;
        front=temp->next;
        delete temp;

        if (front==NULL)
        {
            rear = NULL;
        }

    }

    int Getfront ()
    {
        if (front==NULL)
        {
            Exception e(101,"Queue is empty (front\n");
            throw e;
        }
        return front->data;
    }
    int getrear()
    {
        if (rear==NULL)
        {
            Exception e(101,"Queue is empty(rear)\n");
            throw e;
        }
        return rear->data;
    }

    void display()
    {
        if (front==NULL)
        {
            cout <<"Queue is empty\n"<<endl;
        }
        Node * current = front;
        while(current!=NULL)
        {

            cout << current->data << "\t";
            current = current->next;

        }
        delete current;
    }


    ~QueueList() {}

protected:

private:
};

#endif // QUEUELIST_H
