#ifndef NODE_H
#define NODE_H


class Node
{
public:
    int data;
    Node * prev;


    Node(int _data)
    {
        data=_data;
        prev=NULL;
    }


protected:

private:
};

#endif // NODE_H

