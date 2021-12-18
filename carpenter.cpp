#include <iostream>
#include <string>
#include "carpenter.h"

using namespace std;

Wood :: Wood (string type, float length, float width, float height)           //constructor
{
    set_length(length);
    set_width (width);
    set_height (height);
}

void Wood :: set_type(string t)
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

void Wood :: set_height (float h)
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

string Wood :: get_type()
{
    return type;
}

string Tool :: set_name(string n)
{
    name_tool = n;
    return n;
}

bool Tool :: set_type (int t)
{
    if (t == 0 || t == 1)                              //The number entered must be 0 or 1
    {
        type_tool = t;
        return true;
    }
    else
        return false;
}

bool Tool :: set_size (int s)
{
    if (s == 1 || s == 2 || s == 3)                     //The number entered must be 1, 2, or 3
    {
        size_tool = s;
        return true;
    }
    else
        return false;
}

string Tool :: get_name() const
{
    return name_tool;
}

int Tool :: get_type() const
{
    return type_tool;
}

int Tool :: get_size () const
{
    return size_tool;
}


bool Drill :: set_condition(int c)
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

int Drill :: get_condition() const
{
    return condition;
}


int Saw ::set_number_of_times_used()
{
    number_of_times_used = 0;
    return number_of_times_used;
}

int Saw ::get_number_of_times_used()
{
    return number_of_times_used ;
}

int Drill ::set_number_of_times_used()
{
    number_of_times_used = 0;
    return number_of_times_used ;
}

int Drill ::get_number_of_times_used()
{
    return number_of_times_used ;
}

void Tool :: print() const
{
    cout << "Name tool : " << get_name() << endl;
    cout << "Type tool : " << get_type() << endl;
    cout << "Size tool : " << get_size() << endl;
}


void Buy :: set_balance()
{
    balance = 0;
}

void Buy :: set_purchased_tool(string n)
{
    purchased_tool = n;
}

long double Buy :: get_balance()
{
    return balance;
}

string Buy :: get_purchased_tool()
{
    return purchased_tool;
}