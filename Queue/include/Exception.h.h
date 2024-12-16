#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
using namespace std;
class Exception
{
public:
    int code ;
    string name;
    Exception(int code_, string name_)
    {
        code=code_;
        name=name_;
    }


protected:

private:
};

#endif // EXCEPTION_H
