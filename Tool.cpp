#include "Tool.h"

using namespace std;

Tool::Name Tool :: set_name(Name n)
{
    name_tool = n;
    return n;
}

bool Tool :: set_type (Type t)
{
    if (t == 0 || t == 1)                              //The number entered must be 0 or 1
    {
        type_tool = t;
        return true;
    }
    else
        return false;
}

bool Tool :: set_size (Size s)
{
    if (s == 1 || s == 2 || s == 3)                     //The number entered must be 1, 2, or 3
    {
        size_tool = s;
        return true;
    }
    else
        return false;
}

Tool::Name Tool :: get_name() const
{
    return name_tool;
}

Tool::Type Tool :: get_type() const
{
    return type_tool;
}

Tool::Size Tool :: get_size () const
{
    return size_tool;
}

Tool::Id Tool::getId() const
{
    return this->id;
}

void Tool :: print() const
{
    cout << "Name tool : " << get_name() << endl;
    cout << "Type tool : " << get_type() << endl;
    cout << "Size tool : " << get_size() << endl;
}

Tool::~Tool()
{

}
