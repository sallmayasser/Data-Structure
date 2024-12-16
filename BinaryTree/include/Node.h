#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node * Right;
    Node * Left;
    int data;
    Node(int _data)
    {
        data=_data;
        Right = Left = NULL;
    }
    ~Node(){
    }


protected:

private:
};

#endif // NODE_H
