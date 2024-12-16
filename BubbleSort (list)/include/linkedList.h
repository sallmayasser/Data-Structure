#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

#include <iostream>
#include <stdexcept>


using namespace std;

class linkedList
{
public:
    node * head;
    node * tail;

    linkedList()
    {
        head=tail=NULL;

    }
    void Insert(int _data)
    {
        node *newNode =new node(_data);
        if(head == NULL)
        {
            head = tail= newNode;

        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;

        }

    }

    void insertAfter(int _data,int afterData )
    {

        node *current = getNode(afterData);

        node *newNode =  new node(_data);

        insertAfterNode( current, newNode);

//        if(current!=NULL)
//        {
//            node *newNode =  new node(_data);
//            if(current == tail)
//            {
//                Insert( _data);
//
//            }
//            else
//            {
//
//                newNode->next = current->next;
//                newNode->prev = current;
//                current->next->prev = newNode;
//                current->next = newNode;
//            }
//            return;
//
//        }
//
//        cout<<"the key not found ";

    }
    void insertAfterNode(node * nextNode, node * current)
    {
        if(nextNode!=NULL)
        {
            if(nextNode == tail)
            {
                Insert( current -> data);

            }
            else
            {
                current->next = nextNode->next;
                current->prev = nextNode;
                nextNode->next->prev = current;
                nextNode->next = current;
            }
            return;

        }

        cout<<"the key not found ";



    }
    void insertBefore(int _data,int afterData)
    {

        node *current = getNode(afterData);
        if(current!=NULL)
        {
            node *newNode =  new node(_data);
            if(current == head)
            {

                head->prev = newNode;
                newNode->next=head;
                head=newNode;


            }
            else
            {
                newNode->next = current;
                newNode->prev = current->prev;
                current->prev->next = newNode;
                current->prev = newNode;
            }
            return;
        }

        cout<<"the key not found ";

    }

    void display()
    {
        node *current = head;
        if(current == NULL)
        {
            cout<<"Linked List Empty \n";
            return;
        }
        while(current!=NULL)
        {
            cout<<current->data<<"\t";
            current = current->next;
        }

    }

    void Remove(int _data)
    {
        node * oldNode=getNode(_data);
        RemoveNode( oldNode);
        delete oldNode;
    }

    void RemoveNode(node* oldNode)
    {

        if(oldNode==NULL)
        {
            cout<<"Not Found "<<endl;
            return ;
        }
        if(head == oldNode)
        {
            if(head == tail)
            {
                head=tail=NULL;
            }
            else
            {
                head=head->next;
                head->prev=NULL;
            }
        }
        else if(tail == oldNode)
        {
            tail=tail->prev;
            tail->next=NULL;
        }
        else
        {
            node * A= oldNode->prev;
            node * B= oldNode->next;
            A->next=B;
            B->prev=A;

        }

    }
    int getCount()
    {
        node *current = head;
        int counter=0;
        while(current!=NULL)
        {
            counter++;
            current = current->next;

        }
        return counter;
    }
    int GetDataByIndex(int index)
    {

        node *current = head;
        int counter=0;


        while(current!=NULL)
        {
            if(counter==index)
            {
                return current->data;
            }
            counter++;
            current = current->next;
        }
        throw std::out_of_range("not found index");

    }

    int operator[](int index)
    {

        GetDataByIndex(index);
    }

    void BubbleSort ()
    {

        node *last = NULL;
        int sorted = 0;

        while (sorted ==0)
        {
            node *current = head;
            sorted= 1;
            while(current->next!= last)
            {
                if(current->data > current->next->data)
                {
                    node *  nextNode= current->next;
                    SwapNode(current,nextNode);

                    sorted=0;
                    current=nextNode;
                }

                current=current->next;

            }
            last = current;
        }
    }
    void SwapNode(node * current,node* nextNode)
    {
        RemoveNode(current);
        insertAfterNode(nextNode,current);
    }

    ~linkedList() {}

protected:

private:
    node* getNode(int _data)
    {
        node *current = head;
        while(current!=NULL)
        {
            if(current->data == _data)
            {
                return current;
            }
            current = current->next;
        }
        return NULL;

    }
};

#endif // LINKEDLIST_H
