#ifndef NODE_H
#define NODE_H


class Node
{
public:
    int data;
    Node * next;


    Node(int _data)
    {
        data=_data;
        next=NULL;
    }


protected:

private:
};

#endif // NODE_H

