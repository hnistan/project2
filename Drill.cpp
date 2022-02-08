#include "Drill.h"
#include <cmath>

using namespace std;

bool Drill ::set_condition(int c)
{
    if (c == 0)
    {
        return false;
    }

    if (c == 1)
    {
        return true;
    }
    return false;
}

int Drill ::get_condition() const
{
    return condition;
}

int Drill ::set_number_of_times_used()
{
    number_of_times_used = 0;
    return number_of_times_used;
}

int Drill ::get_number_of_times_used()
{
    return number_of_times_used;
}

Wood &Drill::connect(Wood &wood1, Wood &wood2,const ConnectType &connectType)
{
    Wood::Height height = max(wood1.get_height(), wood2.get_height());
    Wood::Length length = max(wood1.get_length(), wood2.get_length());
    Wood::Width width = max(wood1.get_width(), wood2.get_width());
    Wood::Type type = wood1.get_type();

    if (connectType == vertical)
    {
        Wood temp = Wood(type, wood1.get_length() + wood2.get_length(), width, height);
        return temp;
    }

    else if (connectType == horizontal)
    {
        Wood temp = Wood(type, length, width, wood1.get_height() + wood2.get_height());
        return temp;
    }
}

Drill::~Drill() {}
