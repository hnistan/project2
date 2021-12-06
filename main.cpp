#include <iostream>
#include <string>
#include "carpenter.h"

                                                          //braye teste dorosti
using namespace std;

void operator+ (const int & i, Saw & s)
{
    if (s.get_size() == 3)
    {
        cout << "It is not possible to change the size" << endl;
        return;
    }
    
    s.set_size(s.get_size() + i);

    if (s.get_size() > 3)
    {
        cout << "It is not possible to change the size" << endl;
        return;
    }
    
}

int main ()
{
    int i = 1;
    Wood w (cherrywood, 20, 39, 20);                                         
    Tool t;
    Saw s;
    Drill d;

    t.set_name("Are");
    t.set_size(2);
    t.set_type(0);

    w.set_height(20);
    w.set_length(12.9);
    w.set_width(20000);

    
    t.print();

    s.set_name("Saw");
    s.set_size(3);
    s.set_type(1);

    s.print();

    i + s;

    s.print();

    s.set_size(1);

    i + s;

    s.print();
    
    return 0;
}

