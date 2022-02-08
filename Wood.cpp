#include "Tool.h"

using namespace std;

Wood :: Wood (Type type, float length, float width, float height)           //constructor
{
    set_length(length);
    set_width (width);
    set_height (height);
}

void Wood :: set_type(Type t)
{
    type = t;
}

void Wood :: set_length (float l)
{
    if (l > 0)                                  //Check the length of the positive
    {
        length = l;
        return;
    }
    else
        throw invalid_argument ("Length should be positive");
}

void Wood :: set_width (float w)
{
    if (w > 0)                                 //Check the width of the positive
    {
        width = w;
        return;
    }
    else
        throw invalid_argument ("Width should be positive");
}

void Wood :: set_height (Height h)
{
    if (h > 0)                                 //Check the height of the positive
    {
        height = h;
        return;
    }
    else
        throw invalid_argument ("Height should be positive");
}

float Wood :: get_length () const
{
    return length;
}

float Wood :: get_width () const
{
    return width;
}

float Wood :: get_height () const
{
    return height;
}

Wood::Type Wood :: get_type()
{
    return type;
}
Wood::Id Wood::getId()
{
    return this->id;
}
