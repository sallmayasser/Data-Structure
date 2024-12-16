#ifndef NODE_H
#define NODE_H


class node
{
public:
    node * next;
    node* prev ;
    int data;
    node(int _data)
    {
        data =_data;
        next = prev = NULL;
    }

    ~node() {}

protected:

private:
};

#endif // NODE_H
