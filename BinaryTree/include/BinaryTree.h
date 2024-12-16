#ifndef BINARYTREE_H
#define BINARYTREE_H
#include "Node.h"
#include "Exception.h"

class BinaryTree
{
public:
    Node * root;
    BinaryTree()
    {
        root = NULL;
    }

    void Insert(int _data)
    {
        Node * newNode = new Node (_data);

        if (root == NULL)
        {
            root=newNode;
            return;
        }
        Node * parent = NULL;
        Node * current = root;
        while(current!=NULL)
        {
            parent = current;

            if(_data > current->data)
            {
                current=current->Right;
            }
            else
            {
                current=current->Left;
            }
        }
        if(_data > parent->data)
            parent->Right=newNode;
        else
            parent->Left=newNode;

    }

    void Remove(int _data)
    {
        Node * oldNode = getNode(_data);

        if (oldNode == NULL)
        {
            throw Exception(101,"Not Found ");
        }
        else if (oldNode == root) // remove root Node
        {
            if (oldNode->Left == NULL && oldNode->Right == NULL )
                root=NULL;

            else if (oldNode->Left == NULL)
                root= root->Right;

            else if (oldNode->Right == NULL)
                root=root->Left;

            else
            {
                Node * newRoot = root->Left;
                Node * maxLeft = getMaxRight(newRoot);
                maxLeft->Right = root->Right;
                root= newRoot;
            }

        }

        else // remove non root
        {
            Node * parent = getParent(oldNode);
            Node * newChild = NULL;
            // leave node
            if (oldNode->Left == NULL && oldNode->Right == NULL )
                newChild = NULL;

            // has only right child
            else if (oldNode->Left == NULL)
                newChild= oldNode->Right;

            // has only left child

            else if (oldNode->Right == NULL)
                newChild = oldNode->Left;

            else
            {
                Node * newparent = oldNode->Left;
                Node * maxLeft = getMaxRight(newparent);
                maxLeft->Right = oldNode->Right;
                newChild = newparent;
            }

            if (parent->Right == oldNode) // check if the old node is on the right
                parent->Right = newChild;

            else                          // check if the old node is on the left
                parent->Left = newChild;

        }

        delete oldNode;
    }
    void DisplayAll()
    {
        Display(root);
    }
//    int getParentByData(int _data)
//    {
//        Node * node = getNode(_data);
//        if (node==NULL)
//        {
//            throw Exception(101,"not found ");
//        }
//        else
//        {
//            if (node == root )
//            {
//                throw Exception(101,"Root does not have parent ");
//
//            }
//            else
//            {
//
//                return getParent(node)->data;
//            }
//        }
//    }
    int Max ()
    {

        Node *node= getMaxRight(root);
        return node ->data;

    }
    int Min()
    {
        Node * current = root;
        Node * parent = NULL;

        if (current == NULL)
        {
            throw Exception(101,"Tree is Empty  ");
        }
        while(current!= NULL)
        {
            parent = current;
            current = current->Left;

        }
        return parent ->data;


    }
protected:

private:
    Node * getNode (int _data)
    {
        Node * current = root;
        while(current!= NULL)
        {
            if (current->data ==_data )
            {
                return current ;
            }
            else if(_data > current->data)
            {
                current=current->Right;
            }
            else
            {
                current=current->Left;
            }

        }
        return NULL;
    }

    Node * getParent (Node *node)
    {
        Node * parent = root;
        while(parent!=NULL)
        {
            if(parent->Right == node || parent->Left ==node)
            {
                return parent;
            }
            else if(node->data > parent->data)
            {
                parent=parent->Right;
            }
            else
            {
                parent=parent->Left;
            }

        }
        return NULL;
    }
    Node * getMaxRight(Node * node)
    {

       Node * current = node;

        if (current == NULL)
        {
            throw Exception(101,"Tree is Empty  ");
        }
        while(current->Right!= NULL)
        {

            current = current->Right;
        }
        return current;
    }

    void Display(Node* node )
    {
        Node * current = node;

        if (current == NULL)
        {
            return ;
        }
        Display(current->Left);
        cout << current->data<<"\t";
        Display(current->Right);

    }
};

#endif // BINARYTREE_H
