#ifndef STACKARR_H
#define STACKARR_H


class StackArr
{
private:

    int *Stk, Tos, Size;
public:
    StackArr(int Size=10 )
    {
        this->Tos=0;
        this -> Size = Size;
        this->Stk = new int[Size];

    }
    StackArr(const StackArr& S)
    {
        this->Tos = S.Tos;
        this->Size = S.Size;
        this->Stk = new int[Size];

        for (int i = 0; i < this->Tos; i++)
        {
            this->Stk[i] = S.Stk[i];
        }

    }
    ~ StackArr()
    {
        delete []Stk;
    }
    void push(int num)
    {
        if (Tos < Size)
        {
            Stk[Tos]=num;
            Tos++;
        }
        else
            throw Exception(101,"stack is full");

    }
    int pop()
    {
        if (Tos == 0 )
            throw Exception(101,"stack is empty");

        else
        {
            int data = Stk[Tos-1];
            Tos--;
            return data ;
        }

    }
    int Peak()
    {
        if (Tos==0)
            throw Exception(101,"stack is empty");

        return Stk[Tos-1];
    }

    void Display()
    {
        if (Tos==0)
            throw Exception(101,"stack is empty");

        for (int i =  this->Tos-1 ; i>=0 ; i--)
        {
            cout<<this->Stk[i]<<"\t"<<endl;
        }
    }
};

#endif // STACKARR_H
