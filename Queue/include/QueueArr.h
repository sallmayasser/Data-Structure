#ifndef QUEUEARR_H
#define QUEUEARR_H

#include "Exception.h"

class Queue
{
public:
    Queue(int Size=5)
    {
        front=rear=-1;
        this -> Size = Size;
        Q = new int[ this->Size];

    }
    bool IsFull()
    {
        return ((rear+1)%Size) == front;

    }

    bool IsEmpty()
    {
        return rear == front;

    }

    void DeQueue(int &data)
    {
        if (!IsEmpty())
        {
            data  = Q[front];
            front = ( front + 1) % Size;
            if(front>rear)
            {
                front=rear=-1;
            }
        }

        else
        {
            Exception e(101,"Queue is empty(DeQueue)\n");
            throw e;
        }
    }

    void EnQueue(int num)
    {


        if(!IsFull())
        {
            if (front == -1)
            {
                // First element being added.
                front = 0;
            }
            rear=(rear+1)%Size;
                 Q[rear]=num;

        }
        else if (IsEmpty())
            rear=front =0;
        else
        {
            Exception e(101,"Queue is full(DeQueue)\n");
            throw e;
        }

    }

    int Getfront ()
    {
        if (front==-1)
        {
            Exception e(101,"Queue is empty (front)\n");
            throw e;
        }
        return Q[front];
    }
    int getrear()
    {
        if (rear==-1)
        {
            Exception e(101,"Queue is empty(rear)\n");
            throw e;
        }
        return Q[rear];
    }
    void display()
    {
        if (IsEmpty())
        {
            cout<<"is empty"<<endl;
        }
        int i =front;
        while(i!=rear)
        {
            cout<<Q[i]<<"\t";
            i=(i+1)%Size;

        }
        cout<<Q[i]<<endl;

    }


    ~ Queue()
    {
        delete []Q;


    }

protected:

private:
    int* Q, front, rear,Size;

};

#endif // QUEUEARR_H
